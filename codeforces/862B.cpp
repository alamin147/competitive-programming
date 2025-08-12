#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define piza ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fn(s,e,in) for(int i=s;i<e;i+=in)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pab(a,b) cout << a <<" "<<b
#define pa(a) cout << a <<" "
#define vc(v,n,l) vector<l>v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);
ll gcd(ll a,ll b);
ll lcm(ll a,ll b);
bool isPrime(ll n);
ll num_one_bits(ll n);

const ll maxN = 1e5 + 9;
ll n;
vector<ll> g[maxN];
vector<bool> visited(maxN);
vector<ll> color(maxN);

bool dfs(ll node)
{
    visited[node] = true;
    for (auto adj_node : g[node])
    {
        if (!visited[adj_node])
        {
            if (color[node] == 1)
                color[adj_node] = 2;
            else
                color[adj_node] = 1;

            bool ok = dfs(adj_node);
            if (!ok)
                return false;
        }
        else if (color[node] == color[adj_node])
            return false;
    }
    return true;
}

void alfa()
{
    cin >> n;
    for (ll i = 1;i <= n - 1;i++)
    {
        ll a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    color[1] = 1;
    ll yoyo = dfs(1);
    ll c1 = 0, c2 = 0;
    for (ll i = 1;i <= n;i++)
    {
        if (color[i] == 1)
            c1++;
        else
            c2++;
    }

    ll mini = min(c1, c2), maxi = max(c1, c2), ans = 0;
    if (c1 == c2)
    {
        for (ll i = 1;i <= n;i++)
        {
            if (mini == c1 && color[i] == 1)
                ans += (maxi - (g[i].size()));
        }
    }
    else
    {
        for (ll i = 1;i <= n;i++)
        {
            if (mini == c1 && color[i] == 1)
                ans += (maxi - (g[i].size()));
            else if (mini == c2 && color[i] == 2)
                ans += (maxi - (g[i].size()));
        }
    }
    cout << ans << '\n';
}


int main()
{
    piza
    int t;

        alfa();

 #ifndef ONLINE_JUDGE
            cerr<<"Time: "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
        #endif
}


bool validIndex(int i,int n){
    return i>=0 && i<n;
}
bool isEven(int n){
    return n%2==0;
}
ll gcd(ll a,ll b){
return __gcd(a,b);
}
ll lcm(ll a,ll b){
return ((a/__gcd(a,b))*b);
}
ll num_one_bits(ll n){
return __builtin_popcountll(n);
}
bool isPrime(ll n){
if(n<=1)return false;
if(n<=3)return true;
if(n%2==0||n%3==0)return false;
for(ll i=5;i*i<=n;i+=6){
if(n%i==0||n%(i+2)==0)return false;
}
return true;
}

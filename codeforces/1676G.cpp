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
const int maxN=4002;
vector<int> adj[maxN];
vector<pair<int,int>> col;

void dfs(int curr,int parent)
{
    for(auto node:adj[curr])
    {
        if(node!=parent)
            dfs(node,curr);
    }
    if(parent!=-1)
    {
        col[parent].first+=col[curr].first;
        col[parent].second+=col[curr].second;
    }
}

void alfa()
{
    int n;
    cin >> n;
    for(int i=0; i<maxN; i++)
        adj[i].clear();
    col.clear();
    int root=1;
    vector<int> v(n+1);
    for(int i=2; i<=n; i++)
    {
        cin >> v[i];
        adj[v[i]].push_back(i);
    }
    string s;
    cin >> s;
    col.resize(n+1);
    for(int i=0; i<=n-1; i++)
    {
        if(s[i]=='W')
            col[i+1].first++;
        else
            col[i+1].second++;
    }
    dfs(root,-1);
    int ans=0;
    for(int i=1; i<=n; i++)
        ans+=(col[i].first==col[i].second);
    cout << ans << '\n';
}

int main()
{
    piza
    int t;
    cin>>t;
    while(t--)
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

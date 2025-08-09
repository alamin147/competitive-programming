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

ll ans = 0;
bool ok = true;
vector<ll> merge_sort(vector<ll> a)
{
    if (a.size() <= 1)
        return a;

    ll mid = a.size() / 2;
    vector<ll>b, c;
    for (ll i = 0; i < mid; i++)
        b.push_back(a[i]);

    for (ll i = mid; i < a.size(); i++)
        c.push_back(a[i]);

    vector<ll>sorted_b = merge_sort(b);
    vector<ll>sorted_c = merge_sort(c);

    vector<ll>sorted_a;
    ll idx1 = 0, idx2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (idx1 == sorted_b.size())
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
        else if (idx2 == sorted_c.size())
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else if (sorted_b[idx1] < sorted_c[idx2])
        {
            sorted_a.push_back(sorted_b[idx1]);
            idx1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[idx2]);
            idx2++;
        }
    }
    vector<ll> t;
    for (auto val : sorted_b)
        t.push_back(val);
    for (auto val : sorted_c)
        t.push_back(val);
    for (ll i = 1;i < sorted_a.size();i++)
    {
        if (abs(sorted_a[i] - sorted_a[i - 1]) > 1)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        if (t != sorted_a)
            ans++;
    }
    return sorted_a;
}

void alfa()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++)
        cin >> a[i];
    if (is_sorted(a.begin(), a.end()))
    {
        cout << 0 << '\n';
        return;
    }
    vector<ll> sorted = merge_sort(a);
    if (ok)
        cout << ans << '\n';
    else
        cout << -1 << '\n';
    ans = 0;
    ok = true;
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

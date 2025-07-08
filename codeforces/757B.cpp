#include<bits/stdc++.h>
using namespace std;
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
const ll maxN = 1e5 + 9;


void alfa()
{
    ll n;
    cin>>n;

    vector<ll> a(n);
    for (ll i = 0;i < n;i++)
        cin >> a[i];

    bool ok = true;
    for (ll i = 0;i < n;i++)
    {
        if (a[i] != 1)
        {
            ok = false;
            break;
        }
    }
    if (ok)
    {
        cout << 1 << '\n';
        return;
    }
    vector<ll> cnt(maxN);
    for (ll i = 0;i < n;i++)
    {
        ll val = a[i];
        for (ll j = 2;j * j <= val;j++)
        {
            if (val % j == 0)
            {
                while (val % j == 0)
                    val /= j;
                cnt[j]++;
            }
        }
        if (val > 1)
            cnt[val]++;
    }
    ll ans = 0;
    for (ll i = 0;i < maxN;i++)
        ans = max(ans, cnt[i]);
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
bool isPrime(ll n){
if(n<=1)return false;
if(n<=3)return true;
if(n%2==0||n%3==0)return false;
for(ll i=5;i*i<=n;i+=6){
if(n%i==0||n%(i+2)==0)return false;
}
return true;
}

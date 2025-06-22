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
const ll maxN = 1e11;
void alfa()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (ll i = 0;i < n;i++) {
        cin >> c[i];
    }

    vector<pair<ll, ll>> vp;
    for (ll i = 0;i < n;i++) {
        vp.push_back({ a[i],-c[i] });
    }

    sort(vp.begin(), vp.end(), greater<pair<ll, ll>>());

    auto ok = [&](ll m) {
        ll curr = h;
        for (ll i = 0;i < n;i++) {
            ll rem, nw, val;
            curr -= vp[i].first;
            rem = m - 1;
            val = (-1LL * vp[i].second);
            nw = 1LL * (rem / val) * vp[i].first;
            curr -= nw;
            if (curr <= 0) {
                break;
            }
        }

        return (curr <= 0);
        };

    ll l = 1, r = maxN, mid, ans = 0;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }

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
bool isPrime(ll n){
if(n<=1)return false;
if(n<=3)return true;
if(n%2==0||n%3==0)return false;
for(ll i=5;i*i<=n;i+=6){
if(n%i==0||n%(i+2)==0)return false;
}
return true;
}

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

void alfa()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, bool> mp;
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
        mp[a[i]] = true;
    }
    if (n == 1) {
        cout << 1 << '\n';
        return;
    }
    sort(a.begin(), a.end());
    vector<ll> all;
    for (ll i = 0;i < n - 1;i++) {
        ll diff = abs(a[i] - a[i + 1]);
        all.push_back(diff);
    }
    sort(all.begin(), all.end());

    ll g = 0;
    for (ll i = 0;i <(all.size());i++) {
        g = __gcd(g, all[i]);
    }

    ll d = g;
    ll mx = a.back(), ans = 0;
    for (ll i = 0;i < n;i++) {
        ans += ((mx - a[i]) / d);
    }

    ll curr = mx - d;
    bool found = false;
    while (true) {
        if (mp.find(curr) == mp.end()) {
            found = true;
            break;
        }
        curr -= d;
    }
    ll res = ans;
    if (found && (curr > a[0])) {
        res += ((mx - curr) / d);
    }
    ll x;
    x = a[0] - d;
    ll nw = ((mx - x) / d);
    ans = min(ans + nw, ans + n);
    if (found && (curr > a[0])) {
        cout << min(res, ans) << '\n';
    }
    else {
        cout << ans << '\n';
    }
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

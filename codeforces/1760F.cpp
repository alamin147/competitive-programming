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
    ll n, c, d;
    cin >> n >> c >> d;
    vector<ll> a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());
    ll s = 0;
    for (ll i = 0;i < n;i++) {
        s += a[i];
        if (s >= c && (i + 1) <= d) {
            cout << "Infinity" << '\n';
            return;
        }
    }

    auto check = [&](ll mid) {
        ll total = 0, days = 0;
        mid++;

        for (ll i = 0;i < min(n, mid);i++) {
            total += a[i];
        }

        ll div = (c / total), rem = c % total;
        if (c % total == 0) {
            div--;
            rem += total;
        }

        days = (div * mid);

        for (ll i = 0;i < n;i++) {
            if (rem <= 0) {
                break;
            }
            days++;
            rem -= a[i];
        }

        return days <= d;

        };

    ll l = 0, r = d, mid, ans = -1;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (check(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    if (ans == -1) {
        cout << "Impossible" << '\n';
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

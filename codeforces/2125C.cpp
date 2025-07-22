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


vector<int> pms = {2, 3, 5, 7};

ll count_bad(ll x) {
    ll res = 0;
    int sz = pms.size();
    for (int m = 1; m < (1 << sz); ++m) {
        ll lcm = 1;
        int bits = 0;
        for (int i = 0; i < sz; ++i) {
            if (m >> i & 1) {
                ++bits;
                lcm *= pms[i];
            }
        }
        if (bits % 2 == 1)
            res += x / lcm;
        else
            res -= x / lcm;
    }
    return res;
}

ll count_good(ll l, ll r) {
    return (r - l + 1) - (count_bad(r) - count_bad(l - 1));
}

int main() {
    piza
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << count_good(l, r) << "\n";
    }
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

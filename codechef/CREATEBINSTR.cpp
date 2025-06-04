#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define piza ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define fn(i, s, e) for (int i = s; i < e; ++i)
#define srt(v) sort(v.begin(), v.end())
#define prn(x) cout << x << '\n'
#define pa(x) cout << x << " "
#define vc(v, n, type) vector<type> v(n)
#define elif else if

bool validIndex(int i, int n);
bool isEven(int n);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);
bool isPrime(ll n);

void solve() {
    int n, aa, bb, cc, dd;
    cin >> n >> aa >> bb >> cc >> dd;

    int maxi = max(cc, dd);
    int res = INT_MIN;

    for (int i = 0; i <= n; ++i) {
        int j = n - i;
        int ans = i * j;

        int fin = (i * aa) + (j * bb) + (ans * maxi);
        res = max(res, fin);
    }

    prn(res);
}

int main() {
    piza
    int t;
    cin >> t;
    while (t--) solve();

#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << " ms\n";
#endif
    return 0;
}

bool validIndex(int i, int n) {
    return i >= 0 && i < n;
}

bool isEven(int n) {
    return (n & 1) == 0;
}

ll gcd(ll a, ll b) {
    return __gcd(a, b);
}

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

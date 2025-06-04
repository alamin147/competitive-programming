#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define piza
#define fn(s, e, in) for (int i = s; i < e; i += in)
#define s(a) sort(a.begin(), a.end())
#define prn(c) cout << c << "\n"
#define cc cout << "\n"
#define pab(a, b) cout << a << " " << b
#define pa(a) cout << a << " "
#define vc(v, n, l) vector<l> v(n)
#define elif else if

bool validIndex(int i, int n);
bool isEven(int n);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);
bool isPrime(ll n);

void alfa() {
    int n, c;
    cin >> n >> c;

    vc(a, n, int);
    vc(b, n, int);
    fn(0, n, 1) cin >> a[i];
    fn(0, n, 1) cin >> b[i];

    unordered_map<int, int> minis;

    fn(0, n, 1) {
        int va = a[i];
        int cost = b[i];
        if (minis.find(va) == minis.end()) {
            minis[va] = cost;
        } else {
            minis[va] = min(minis[va], cost);
        }
    }
    int v = 0;
    for (auto& p : minis) {
        int cost = p.second;
        if (c > cost) {
            v += (c - cost);
        }
    }
    prn(v);
}

int main() {
    piza
    int t;
    cin >> t;
    while (t--)
        alfa();

#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
}

bool validIndex(int i, int n) {
    return i >= 0 && i < n;
}
bool isEven(int n) {
    return n % 2 == 0;
}
ll gcd(ll a, ll b) {
    return __gcd(a, b);
}
ll lcm(ll a, ll b) {
    return ((a / __gcd(a, b)) * b);
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

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define fn(s, e, in) for (int i = s; i < e; i += in)
#define s(a) sort(a.begin(), a.end())
#define prn(c) cout << c << "\n"
#define cc cout << "\n"
#define pab(a, b) cout << a << " " << b
#define pa(a) cout << a << " "
#define vc(v, n, l) vector<l>v(n)
#define elif else if

bool validIndex(int i, int n);
bool isEven(int n);

void alfa()
{
    ll n;
    cin >> n;
    vc(bits, 31, ll);

    fn(0, n, 1) {
        ll tt;
        cin >> tt;
        fn(0, 31, 1) {
            if ((tt >> i) & 1)
                bits[i]++;
        }
    }

    vector<ll> ans;
    for (ll k = 1; k <= n; k++) {
        bool err = false;
        fn(0, 31, 1) {
            if (bits[i] % k != 0) {
                err = true;
                break;
            }
        }
        if (!err)
            ans.push_back(k);
    }

    for (auto i : ans)
        pa(i);
    cc;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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

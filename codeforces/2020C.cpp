#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
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

bool kth_bit_on(long long n, int k)
{
    return ((n >> k) & 1);
}

long long turn_on_kth_bit(long long n, int k)
{
    return (n | (1LL << k));
}

long long turn_off_kth_bit(long long n, int k)
{
    return (n & (~(1LL << k)));
}

void alfa()
{
    long long a = 0, b, c, d;
    cin >> b >> c >> d;
    a = b;
    int MSB = max({__lg(b), __lg(c), __lg(d)});
    for (int k = 0; k <= MSB; k++)
    {
        if (!kth_bit_on(b, k) && kth_bit_on(d, k))
        {
            a = turn_on_kth_bit(a, k);
        }
        if (kth_bit_on(c, k) && kth_bit_on(d, k))
        {
            a = turn_off_kth_bit(a, k);
        }
    }
    if ((a | b) - (a & c) == d)
    {
        cout << a << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
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

bool validIndex(int i, int n)
{
    return i >= 0 && i < n;
}
bool isEven(int n)
{
    return n % 2 == 0;
}

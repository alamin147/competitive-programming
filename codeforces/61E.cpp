#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define piza                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
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
ll num_one_bits(ll n);

void alfa()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pbds<long long> p;
    vector<long long> inv(n);

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == (n - 1))
            p.insert(a[i]);
        else
        {
            inv[i] = p.order_of_key(a[i]);
            p.insert(a[i]);
        }
    }
    p.clear();
    long long ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (j == 0)
            p.insert(a[j]);
        else
        {
            long long less = p.order_of_key(a[j]);
            long long big = p.size() - less;
            ans += (big * inv[j]);
            p.insert(a[j]);
        }
    }
    cout << ans << '\n';
}

int main()
{
    piza int t;

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
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return ((a / __gcd(a, b)) * b);
}
ll num_one_bits(ll n)
{
    return __builtin_popcountll(n);
}
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

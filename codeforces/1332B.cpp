#include <bits/stdc++.h>
using namespace std;
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

vector<int> allPrimes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void alfa()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (a[i] % allPrimes[j] == 0)
            {
                mp[allPrimes[j]].push_back(i);
                break;
            }
        }
    }

    vector<int> ans(n);
    int color = 1;
    for (auto [x, y] : mp)
    {
        for (auto pos : y)
        {
            ans[pos] = color;
        }
        color++;
    }

    cout << mp.size() << '\n';
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
}

int main()
{
    piza int t;
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
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return ((a / __gcd(a, b)) * b);
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

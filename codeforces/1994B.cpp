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

void alfa()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    if (s == t)
    {
        cout << "YES" << '\n';
        return;
    }

    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            pos = i;
            break;
        }
    }

    if (pos != -1)
    {
        bool err = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                if (pos > i)
                {
                    err = true;
                    break;
                }
            }
        }
        if (!err)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
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

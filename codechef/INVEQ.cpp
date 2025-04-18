#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fn for (int i = 0; i < n - 1; i++)
#define s(a) sort(a.begin(), a.end())
#define prn(c) cout << c << "\n"
#define cc cout << "\n"
#define pr(a, b) cout << a << " " << b
#define pra(a) cout << a << " "
#define vc(v, n) vector<int> v(n)
#define elif else if
bool validIndex(int i, int n)
{
    return i >= 0 && i < n;
}

void alfa()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a;
    int newN = 0;
    fn
    {
        if (a[i] != a[i + 1])
        {
            b += a[i];
            newN++;
        }
    }
    if (b[newN - 1] != a[n - 1])
        {b += a[n - 1];newN++;}

    int z = 0, o = 0;
    for (int i = 0; i < newN; i++)
        if (b[i] == '0')
            z++;
        else
            o++;
    cout<<min(z,o)<<endl;
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
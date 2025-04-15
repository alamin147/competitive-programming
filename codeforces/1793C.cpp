#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fn for (int i = 0; i < n; i++)
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
    int n;
    cin >> n;
    vector<int> v(n);
    fn
    {
        cin >> v[i];
    }
   
    int lo = 0;
    int hi = n - 1;
    int mx = n;
    int mn = 1;
    while (hi >= lo)
    {
        if ((v[hi] == mx && v[lo] == mn) || (v[hi] == mn && v[lo] == mx))
        {
            hi--;
            lo++;
            mn++;
            mx--;
        }
        elif (v[hi] == mx)
        {
            hi--;
            mx--;
        }
        elif (v[hi] == mn)
        {
            hi--;
            mn++;
        }
        elif (v[lo] == mx)
        {
            lo++;
            mx--;
        }
        elif (v[lo] == mn)
        {
            lo++;
            mn++;
        }
        else
        {
            cout << lo + 1 << " " << hi + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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
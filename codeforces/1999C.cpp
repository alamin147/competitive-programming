#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        ll n, s, m;

        cin >> n >> s >> m;
        bool shower = false;

        ll a[n][2];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i + 1][0] - a[i][1]) >= s)
            {
                shower = true;
                // cout << "inside ";
                break;
            }
        }
        if (abs(a[0][0] - 0) >= s || abs(a[n - 1][1] - m) >= s)
        {
            shower = true;
            // cout << "outside ";
        }

        if (shower == true)
            py;
        else
            pn;
    }
}

#include <bits/stdc++.h>
using namespace std;
#define lld long long int
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
        int a[] = {0, 0, 0, 0, 0, 0, 0};
        int n, m;
        cin >> n >> m;
        string b;
        cin >> b;
        for (int i = 0; i < n; i++)
        {
            int index = b[i] - 'A';
            a[index]++;
        }
        int ans = 0;
        for (int i = 0; i < 7; i++)
        {
            if (a[i] < m)
                ans += (m - a[i]);
        }
 
        cout << ans << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        char b[] = "abcdefgh";
        for (int i = 1; i <= 8; i++)
        {
            if ((a[1] - '0') == i)
                continue;
            else
                cout << a[0] << i << endl;
        }
        for (int i = 0; i < 8; i++)
        {
            if (a[0] == b[i])
                continue;
            else
                cout << (b[i]) << a[1] << endl;
        }
    }
}

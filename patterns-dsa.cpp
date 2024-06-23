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
    // freopen("output.txt", "w", stdout);
#endif

    // 1
    // ****
    // ****
    // ****
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    // 2
    // *
    // **
    // ***

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;

    // 7
    //   *
    //  ***
    // *****

    for (int i = n; i >= 0;i--)
    {

        for (int k = 0; k < n - i ; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i-1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
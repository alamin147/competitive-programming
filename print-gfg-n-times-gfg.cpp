#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

void print(int N)
{

    if (N == 0)
        return;
    print(N - 1);
    cout << "GFG" << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
#endif
    print(5);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int reverse(int x)
{

    vector<int> v;
    while (x != 0)
    {
        v.push_back(x % 10);
        x = x / 10;
    }

    int size = v.size();
    int final = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int tem = round(pow(10, size - 1 - i));
        // cout << tem<< " ";
        final += (tem * v[i]);
    }

    return (final < INT_MIN || final > INT_MAX) ? 0 : final;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    int a = reverse(1534236469);
    // 3*10^2
    // 2*10^1
    // 1*10^0
}
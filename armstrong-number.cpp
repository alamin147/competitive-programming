#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

bool isArmstrong(int n)
{
    // 123
    vector<int> v;
    int num = n;

    while (n != 0)
    {
        v.push_back(n % 10);
        n /= 10;
    }

    int len = v.size();
    int sum = 0;

    for (auto i : v)
    {
        sum += (round(pow(i, len)));
    }

    if (sum == num)
        return true;

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << isArmstrong(n) << "\n";
}
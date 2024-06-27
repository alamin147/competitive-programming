#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

vector<long long> factorialNumbers(long long n)
{
    vector<long long> v;
    long long fact = 1;
    for (long long i = 2;; i++)
    {
        if (fact > n)
            return v;
        v.push_back(fact);
        fact *= i;
    }

    return v;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    vector<long long> ans = factorialNumbers(3);
    for (auto num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
}

#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

class Solution
{
public:
    bool isPalindrome(string s)
    {

        int len = s.length();

        char b[len + 1];
        int j = 0;
        for (auto x : s)
        {
            if ('A' <= x && 'Z' >= x)
                // x = x + 32;
                b[j++] = x + 32;

            else if ('a' <= x && 'z' >= x)
                b[j++] = x;
            else if ('0' <= x && '9' >= x)
                b[j++] = x;
        }

        for (int i = 0; i < j / 2; i++)
        {
            if (b[i] != b[j - 1 - i])
                return false;
        }

        return true;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    Solution s;
    // string a = "A man, a plan, a canal: Panama";
    string a = "Race a car";
    // cout << s.isPalindrome(a) << endl;
}
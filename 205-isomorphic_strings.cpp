static const int __ = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        vector<int> m(128);
        vector<int> n(128);

        for (int i = 0; i < s.size(); i++)
        {
            if (m[s[i]] != n[t[i]])
                return false;
            m[s[i]] = i + 1;
            n[t[i]] = i + 1;
        }

        return true;
    }
};
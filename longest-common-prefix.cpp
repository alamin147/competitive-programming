#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {

        int mini = 500;
        for (auto i : strs)
        {
            if (mini > i.length())
                mini = i.length();
        }
        string ans = "";
        string first = strs[0], last = strs[strs.size() - 1];

        for (int i = 0; i < mini; i++)
        {
            if (first[i] != last[i])
            {
                return ans;
            }
            ans + first[i];
        }
        
    }
};

int main()
{
    Solution s;
    vector<string> v;
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    // strs = ["flower","flow","flight"]

    for (auto i : v)
    {
        cout << i.length() << " ";
    }
    // s.longestCommonPrefix(v);
}
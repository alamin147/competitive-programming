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
    bool canJump(vector<int> &nums)
    {

        int len = nums.size() - 1;
        int final = len;
        for (int i = len - 1; i >= 0; i--)
        {
            // 1 1 2 7 1 0 0 1 9
            if (i + nums[i] >= final)
                final = i;
        }

        return final == 0;
    }
};
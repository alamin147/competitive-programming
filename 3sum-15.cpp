// static const int __ = []()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     return 0;
// }();
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        set<vector<int>> ss;
        int len = nums.size();

        for (int run = 0; run < len; run++)
        {
            // -4 -1 -1 0 1 2
            int s = nums[run];
            int i = run + 1, j = len - 1;
            while (i < j)
            {
                int ans = s + nums[i] + nums[j];
                if (ans == 0)
                {
                    ss.insert({s, nums[i], nums[j]});
                    i++;
                    j--;
                }
                else if (ans > 0)
                    j--;
                else
                    i++;
            }
        }

        vector<vector<int>> v;
        for (auto i : ss)
            v.push_back(i);

        return v;
    }
};

int main()
{
    Solution s;
    vector<int> test = {0, 0, 0, 0};
    // {-1, 0, 1, 2, -1, -4, -1, -1, 2, 0, -1, 1, -1, 1, 0};
    // {-1, 0, 1, 2, -1, -4};
    //  [-1,0,1,2,-1,-4,-1,-1,2,0,-1,1,-1,1,0]
    vector<vector<int>> a = s.threeSum(test);

    for (auto i : a)
    {
        cout << i[0] << " " << i[1] << " " << i[2] << endl;
    }
}
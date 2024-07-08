#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int c = 1;
        int k = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                if (c < 2)
                {
                    nums[k++] = nums[i];
                    c++;
                }
            }
            else
            {
                nums[k++] = nums[i];
                c = 1;
            }
        }
        return k;
    }
};

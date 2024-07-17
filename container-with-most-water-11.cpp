#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1;
        int max = 0;
        while (i < j)
        {
            int temMax = min(height[i], height[j]) * (j - i);
            if (temMax > max)
                max = temMax;
            // 7
            //  [1,8,6,2,5,4,8,3,7]
            //  2 5
            if (height[i] > height[j])
                j--;
            else
                i++;
        }
        return max;
    }
};
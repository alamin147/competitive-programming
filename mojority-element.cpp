#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> v;
        for (int i = 0; i < n; i++)
        {
            v[nums[i]]++;
        }
        n = n / 2;
        for (auto i : v)
        {
            if (i.second > n)
            {
                return i.first;
            }
        }
        return 0;
    }
};
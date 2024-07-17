#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0, j = numbers.size() - 1;
        while (i < j)
        {
            long long value = numbers[i] + numbers[j];
            if (value == target)
                return {i + 1, j + 1};
            else if (value > target)
                j--;
            else
                i++;
        }
        return {-1, -1};
    }
};
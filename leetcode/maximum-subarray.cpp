
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int j = 0, n = nums.size();
    int ans = INT_MIN, sum = 0;

    while (j < n) {
      sum += nums[j];
      ans = max(ans, sum);

      if (sum < 0) {
        ans = max(ans, nums[j]);
        sum = 0;
      }
      j++;
    }
    return ans;
  }
};

class Solution {
public:
  long long splitArray(vector<int> &nums) {
    int n = nums.size();

    vector<long long> ps(n + 1, 0);
    for (int i = 0; i < n; i++)
      ps[i + 1] = ps[i] + nums[i];

    vector<bool> dec(n, true);
    for (int i = n - 2; i >= 0; i--) {
      if (nums[i] <= nums[i + 1])
        dec[i] = false;
      else
        dec[i] = dec[i + 1];
    }

    vector<bool> inc(n, true);
    for (int i = 1; i < n; i++) {
      if (nums[i] <= nums[i - 1])
        inc[i] = false;
      else
        inc[i] = inc[i - 1];
    }

    long long ans = LLONG_MAX;
    for (int i = 1; i < n; i++) {
      if (inc[i - 1] && dec[i]) {
        long long ls = ps[i];
        long long rs = ps[n] - ps[i];
        ans = min(ans, llabs(ls - rs));
      }
    }
    if (ans == LLONG_MAX)
      return -1;
    return ans;
  }
};

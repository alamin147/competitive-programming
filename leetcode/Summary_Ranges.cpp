class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> v;
        int n=nums.size();
        if(n<=1)
        {
            if(n==0)
            return v;
            v.push_back(to_string(nums[0]));
            return v;
        }

        for (int i = 0; i < n; i++) {
            int start = i;
            while (i + 1 < n && nums[i] + 1 == nums[i + 1]) {
                i++;
            }
            if (start == i) {
                v.push_back(to_string(nums[start]));
            } else {
                v.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            }
        }

        return v;
    }
};

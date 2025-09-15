class Solution {
public:
    vector<vector<int>> res;

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> temp;
        vector<bool> used(nums.size(), false);
        backtrack(nums, temp, used);
        return res;
    }

private:
    void backtrack(vector<int>& nums, vector<int>& temp, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            res.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i]) continue;

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            used[i] = true;
            temp.push_back(nums[i]);

            backtrack(nums, temp, used);

            temp.pop_back();
            used[i] = false;
        }
    }
};

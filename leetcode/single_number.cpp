class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        int ans;
        for(auto [i,j]:m)
        {
            if(j==1)
            {
                ans=i;
                break;
            }
        }
    return ans;
    }
};

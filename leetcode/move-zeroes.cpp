class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>n;
        int z=0;
        for(auto i:nums)
        {
            if(i==0)
            z++;
            else
            n.push_back(i);
        }
        while(z--)
        {
            n.push_back(0);
        }
        nums=n;
    }
};

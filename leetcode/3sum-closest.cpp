class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];

        for(int one=0;one<nums.size()-2;one++)
        {
            int i=one+1,j=nums.size()-1;

            while(i<j)
            {
                int sum=nums[one]+nums[i]+nums[j];
                if(abs(sum-target)<abs(closestSum-target)){
                    closestSum = sum;
                }
                if(sum==target)
                return sum;

                if(sum>target)
                j--;
                else
                i++;
            }
        }
        return closestSum;
    }
};

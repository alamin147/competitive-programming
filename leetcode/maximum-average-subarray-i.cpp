class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=0;
        double s=0;
        double maxi=-DBL_MAX;
        while(l<nums.size()&&r<nums.size())
        {
            s+=nums[r];

            if(r-l+1==k)
            {
                double avg=s/k;
                maxi=max(maxi,avg);
                s-=nums[l];
                l++;
            }
            r++;
        }
        return maxi;
    }
};

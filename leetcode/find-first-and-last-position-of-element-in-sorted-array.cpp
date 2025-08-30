#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        int ans1=right+1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                ans1=min(ans1,mid);
                right=mid-1;
            }
            else if(nums[mid]>target)
            right=mid-1;
            else
            {
                left=mid+1;
            }
        }
        left=0,right=nums.size()-1;
        int ans2=-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                ans2=max(ans2,mid);
                left=mid+1;
            }
            else if(nums[mid]>target)
            right=mid-1;
            else
            {
                left=mid+1;
            }
        }

        if(ans1==nums.size()||ans2==-1)
        return {-1,-1};
        return {ans1,ans2};

    }
};

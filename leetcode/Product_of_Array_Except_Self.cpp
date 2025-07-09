#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int z=0;
        long long s=1;
        for(auto i:nums)
        {
            if(i==0)
            z++;
            if(i!=0)
            s*=i;
        }
        if(z>1)
        {
            for(auto &i:nums)
            i=0;
        }
        else if(z==1)
        {
            for(auto &i:nums)
            {
                if(i==0)
                i=s;
                else
                i=0;
            }
        }
        else
        {
            for(auto &i:nums)
            {
                i=(s/i);
            }
        }
        return nums;
    }
};

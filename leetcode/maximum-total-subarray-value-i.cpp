#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mini=INT_MAX,maxi=INT_MIN;

        for(auto i:nums)
        {
            mini=min(mini,i);
            maxi=max(maxi,i);
        }
        long long ans=(maxi-mini);
        return (1LL*ans*k);
    }
};

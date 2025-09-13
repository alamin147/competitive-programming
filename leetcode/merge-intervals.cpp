#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++)
        {
            auto &curr=intervals[i];
            auto &last=ans.back();
            if(curr[0]<=last[1])
            {
                last[1]=max(last[1],curr[1]);
            }
            else {
                ans.push_back(curr);
            }
        }
        return ans;
    }
};

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
      set<int,greater<int>>s;

      for(auto i:nums){
           s.insert(i);
       }
      vector<int>ans;
      int n=s.size();
      while(k&&n)
      {
        ans.push_back(*s.begin());
        s.erase(s.begin());
        k--,n--;
      }
      return ans;
    }
};


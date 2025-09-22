#include <bits/stdc++.h>
#include <climits>
using namespace std;

class Solution {
public:
  int earliestTime(vector<vector<int>> &tasks) {
    int mini = INT_MAX;
    for(auto v:tasks)
    {
      mini=min(mini,(v[0]+v[1]));
    }
    return mini;
  }
};

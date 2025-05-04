#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int maximumSumSubarray(vector<int>& arr, int k) {
        
        long long maxs=0,curs;
        int i=0,j=k-1;
        int as=arr.size();
        for(int i=0;i<=j;i++)
        maxs+=arr[i];
        curs=maxs;
        while(j+1<as)
        {
          curs-=arr[i];
          curs+=arr[j+1];
          if(curs>maxs)
          maxs=curs;
          i++;j++;
        }
        
        if(curs>maxs)
        return curs;
        return maxs; 
      }
  };
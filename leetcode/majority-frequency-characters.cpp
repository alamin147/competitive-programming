#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string majorityFrequencyGroup(string s) {
      int a[101]={0};
      map<char,int>m;
      for(auto i:s)
      {
        m[i]++;
      }

      for(auto [x,y]:m)
      {
        //int c=m[i.first];
        a[y]++;
      }
      
      int maxi=-1,maxindex=0;
      for(int i=0;i<101;i++)
      {
        if(maxi<a[i]||(a[i] == maxi && i > maxindex))
        {
          maxi=a[i];
          maxindex=i;
        }
      }
      
      string res="";

      for(auto [x,y]:m)
      {
        if(y==maxindex)
          res+=x;
      }
      return res;
    }
};

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
      vector<pair<char,int>>st;
      vector<int>op;
      for(int i=0;i<s.size();i++){
       if(s[i]=='(')
       {
         op.push_back(i);
         st.push_back({s[i],i});
       }
       else if(s[i]==')')
       {
          if(op.size()>0)
          {
            st.push_back({s[i],i});
            op.pop_back();
          }
       }
       else st.push_back({s[i],i});
      }
      int i=0;
      string res="";
      reverse(op.begin(),op.end());
      // delete remaining '(' from stack
    //   for(auto i:op)
    //   {
    //     cout<<i<<" ";
    //   }
    //   cout<<endl;
    if(op.size()==st.size())
    return "";
      int idx = 0;
      for (auto &p : st) {
          if (!op.empty() && op.back() ==p.second) {
            op.pop_back();
            continue;
            }
            res+=p.first;
        }
        return res;
    }
};

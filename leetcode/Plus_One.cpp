#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        reverse(digits.begin(),digits.end());
        vector<int>v;
        int add=1;
        for(int i=0;i<n;i++)
        {
            int tem=digits[i]+add;
            add=0;
            if(tem==10)
            {
                v.push_back(0);
                add=1;
                if(i==n-1)
                v.push_back(1);
            }
            else
            {
                v.push_back(tem);
                add=0;
            }
        }
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        return v;
    }
};

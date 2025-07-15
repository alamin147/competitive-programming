#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string a,b;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(a.size()==0)
                continue;
                reverse(a.begin(),a.end());
                b+=a;
                b+=' ';
                a.clear();
            }
            else
            {
                a+=s[i];
            }
        }
        if(a.size()!=0)
        {
            reverse(a.begin(),a.end());
            b+=a;
        }
        if(b[b.size()-1]==' ')
        b.pop_back();
        return b;
    }
};

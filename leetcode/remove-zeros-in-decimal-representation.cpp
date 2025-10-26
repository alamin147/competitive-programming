#include <bits/stdc++.h>
#include <string>
using namespace std;

class Solution {
public:
    long long removeZeros(long long n) {
       string s=to_string(n),a="";
        for(auto i:s)
        {
            if(i!='0')
                a+=i;
        } 
        long long ans=stoll(a);
        return ans;
    }
};

int main()
{   
    long long n;
    cin>>n;

    Solution s = Solution();
    cout<<s.removeZeros(n);
    
}

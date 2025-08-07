#include<bits/stdc++.h>

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            long long a=num_one_bits(i);
            v.push_back(a);
        }
        return v;
    }

    private:
    long long num_one_bits(long long n){
return __builtin_popcountll(n);
}
};

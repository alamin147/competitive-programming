class Solution {
public:
    int maxDifference(string s) {
        int odm=0,odl=INT_MAX,evm=0,evl=INT_MAX;
        map<char, int>m;
        for(auto i:s)
        {
            m[i]++;
        }

        int odd = 0;
        int even = s.length();
        for (auto [x,n] : m) {
            if (n % 2 == 1) {
                odd = max(odd, n);
            } else if (n != 0) {
                even = min(even, n);
            }
        }

        return odd - even;
    }
};

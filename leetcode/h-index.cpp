#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();

        sort(citations.begin(), citations.end());

        for (int i = 0; i < n; i++) {
            int rem = n - i;
            if (citations[i]>=(rem))
                return rem;
        }
        return 0;
    }
};

int main()
{
    vector<int>v={1,3,1};
    Solution s;
    cout<<(s.hIndex(v));
}

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int j = 0;
        for (int i = m; i < m + n; i++)
            nums1[i] = nums2[j++];
        sort(nums1.begin(), nums1.end());
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    Solution s;
    //  s.merge({1,2,3,0,0,0},3,{1,2,3},3);
}
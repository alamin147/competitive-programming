#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int j = 0;

        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] != nums[i + 1])
                nums[j++] = nums[i];
        }
        nums[j++] = nums[nums.size() - 1];

        return j;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
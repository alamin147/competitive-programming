static const int __ = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max = 0, j = 0;
        int len = prices.size();

        for (int i = 1; i < len; i++)
        {
            if (prices[j] < prices[i])
                max += prices[i] - prices[j];

            prices[j] = prices[i];
            j++;
        }
        return max;
    }
};
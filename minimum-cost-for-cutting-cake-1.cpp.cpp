#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minimumCost(int m, int n, vector<int> &horizontalCut, vector<int> &verticalCut)
    {
        sort(horizontalCut.rbegin(), horizontalCut.rend());
        sort(verticalCut.rbegin(), verticalCut.rend());
        int i = 0, j = 0;
        int hor = 1, ver = 1;
        int cost = 0;
        while (i < n && j < m)
        {
            if (horizontalCut[i] >=verticalCut[j])
            {
                cost += horizontalCut[i] * ver;
                hor++;
                i++;
            }
            else
            {
                cost += verticalCut[j] * hor;
                ver++;
                j++;
            }
        }

        while (i < n)
        {
            cost += horizontalCut[i] * ver;

            i++;
        }
        while (j < m)
        {
            cost += verticalCut[j] * hor;
            j++;
        }
        return cost;
    }
};

int main()
{
    Solution s;
    vector<int> v = {7};
    vector<int> c = {4};
    cout << s.minimumCost(2, 2, v, c) << endl;
}
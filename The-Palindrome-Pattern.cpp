//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string pattern(vector<vector<int>> &arr)
    {
        // Code Here
        int row = arr.size();
        int col = arr[0].size();

        if (col == 1)
            return "0 R";
        if (row == 1)
            return "0 C";
        // row check
        for (int i = 0; i < row; i++)
        {
            int count = 0;
            for (int j = 0; j < col / 2; j++)
            {
                if (arr[i][j] == arr[i][col - 1 - j])
                {
                    count++;
                    if (count == col / 2)
                        return to_string(i) + " R";
                }
                else
                    break;
            }
        }

        // col check

        for (int i = 0; i < col; i++)
        {
            int count = 0;
            for (int j = 0; j < row / 2; j++)
            {
                if (arr[j][i] == arr[row - 1 - j][i])
                {
                    count++;
                    if (count == row / 2)
                        return to_string(i) + " C";
                }
                else
                    break;
            }
        }

        return "-1";
    }
};

//{ Driver Code Starts.

int main()
{

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends
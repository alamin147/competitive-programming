//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int findCoverage(vector<vector<int>> &matrix)
    {
        // Code here

        int n = matrix.size();
        int m = matrix[0].size();

        int c = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                  if (matrix[i][j] == 0)
                {
                    if (i > 0 && matrix[i-1][j] == 1){
                        c++;
                    }
                    if (i < n - 1 && matrix[i+1][j] == 1){
                        c++;
                    }
                    if (j > 0 && matrix[i][j-1] == 1){
                        c++;
                    }
                    if (j < m - 1 && matrix[i][j+1] == 1){
                        c++;
                    }
                }
            }
        }

        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool isToepliz(vector<vector<int>> &mat);

int main()
{
    // your code goes here
    // int t;
    // cin >> t;
    // while (t--)
    {
        // int row, m;
        // cin >> n >> m;
        // vector<vector<int>> a(n, vector<int>(m, 0));

        // for (int i = 0; i < row; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //         cin >> a[i][j];
        // }

        // vector<vector<int>> a = {
        //     {11, 74, 0, 93},
        //     {40 ,11 ,74, 7}};
        vector<vector<int>> a =

            {{6, 4, 6, 7, 3, 0, 0},
             {10, 6, 4, 6, 7, 3, 0},
             {2, 10, 6, 4, 6, 7, 3},
             {3, 2, 10, 6, 4, 6, 7}};

        bool b = isToepliz(a);

        if (b == true)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

bool isToepliz(vector<vector<int>> &mat)
{

    int row = mat.size();
    int m = mat[0].size();

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (mat[i][j] == mat[i - 1][j - 1])
                continue;
            else
                return false;
        }
    }
    return true;
}
// 4 7
// 6 4 6 7 3 0 0
// 10 6 4 6 7 3 0
// 2 10 6 4 6 7 3
// 3 2 10 6 4 6 7

// 11 74 0 93
// 40 11 74 7

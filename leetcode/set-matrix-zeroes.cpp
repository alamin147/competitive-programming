#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int>rows,cols;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            int row=*rows.begin();

            //make 0 to entire row
            if(i==row&&!rows.empty())
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    matrix[i][j]=0;
                }
                rows.erase(rows.begin());
            }
        }
        for(int j=0;j<matrix[0].size();j++)
        {
            // make 0 to entire col
            int col=*cols.begin();
            if(j==col&&!cols.empty())
            {
                for(int i=0;i<matrix.size();i++)
                {
                    matrix[i][j]=0;
                }
                cols.erase(cols.begin());
            }
        }
        return ;
    }

};

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(), m=matrix[0].size();
        int i=0,j=n-1;
        int row;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(matrix[mid][0]==target)
            {
                row=mid;
                break;
            }
            else if(matrix[mid][0]>target)
            {
                j=mid-1;
            }
            else{
                i=mid+1;
                row=mid;
            }
        }
        int low=0,high=m-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(matrix[row][mid]==target)
            return true;

            else if(matrix[row][mid]>target)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};


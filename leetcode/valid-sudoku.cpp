#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        return (rowCheck(board)&&colCheck(board)&&boxCheck(board));
    }

    private:
    int convert(char a)
    {
        if(a=='.')
        return 0;
        return a-'0';
    }
    private:
    bool rowCheck(vector<vector<char>>& board)
    {
        for(int i=0;i<9;i++)
        {
            int v[]={0,0,0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++)
            {
                int num=convert(board[i][j]);
                if(num!=0)
                {
                    v[num]++;
                    if(v[num]>1)
                    return false;
                }
            }
        }
        return true;
    }
    private:
    bool colCheck(vector<vector<char>>& board){
         for(int i=0;i<9;i++)
        {
            int v[]={0,0,0,0,0,0,0,0,0,0,0};
            for(int j=0;j<9;j++)
            {
                int num=convert(board[j][i]);
                if(num!=0)
                {
                    v[num]++;
                    if(v[num]>1)
                    return false;
                }
            }
        }
        return true;
    }
    private:

    bool boxCheck(vector<vector<char>>& board) {
    for (int boxRow = 0; boxRow < 3; boxRow++) {
        for (int boxCol = 0; boxCol < 3; boxCol++) {
            int v[10] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int num = convert(board[boxRow*3 + i][boxCol*3 + j]);
                    if (num != 0) {
                        v[num]++;
                        if (v[num] > 1) return false;
                    }
                }
            }
        }
    }
    return true;
}

};

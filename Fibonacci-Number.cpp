#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {
        if (n == 0)
            return 0;
        int c = 0;
        int a0 = 0;
        int a1 = 1;
        while (1)
        {
            int s = a0 + a1;
            c++;
            if (c == n)
                return a1;
            a0 = a1;
            a1 = s;
        }
    }
};

int main()
{

    Solution s;
    int f = s.fib(0);
    cout << f << endl;
    //  f = s.fib(3);
    // cout << f << endl;
    //  f = s.fib(5);
    // cout << f << endl;
}
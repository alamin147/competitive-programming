#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getSmallestString(string s)
    {
        int size = s.length();
        int index = -1;
        int curr = -1;
        for (int i = 0; i < size - 1; i++)
        {
            char ch1 = s[i];
            int num1 = int(ch1);
            char ch2 = s[i + 1];
            int num2 = int(ch2);

            if (num1 > num2 && ((num1 % 2 == 0 && num2 % 2 == 0) || (num1 % 2 != 0 && num2 % 2 != 0)))
            {
                if (curr < num1)
                {
                    curr = num1;
                    index = i;
                    swap(s[index], s[index + 1]);
                    return s;
                }
            }
        }
        return s;
    }
};
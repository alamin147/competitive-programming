#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        bool foundWord = false;
        int c = 0;
        for (int i = s.length(); i >= 0; i--)
        {
            if (s[i] == ' ' && foundWord == false)
                continue;
            else if (foundWord == true && s[i] == ' ')
                break;
            else if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            {
                foundWord = true;
                c++;
            }
        }
        return c;
    }
};
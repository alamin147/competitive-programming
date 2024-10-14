static const int __ = []()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());

        int size1 = ransomNote.size();
        int size2 = magazine.size();

        string a = "efjbdfbdgfjhhaiigfhbaejahgfbbgbjagbddfgdiaigdadhcfcj";
        string b = "bg";
        int i = 0, j = 0, c = 0;

        while (i != size1)
        {
            if (ransomNote[i] == magazine[j])
            {
                i++;
                j++;
                c++;
            }
            else if (ransomNote[i] != magazine[j])
            {
                j++;
            }

            if (j == size2)
                break;
        }

        if (c == size1)
            return true;
        return false;
    }
};

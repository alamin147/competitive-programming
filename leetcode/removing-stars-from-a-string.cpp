class Solution {
public:
    string removeStars(string s) {
        int n = s.size();

        string a = "";
        int st = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '*')
            {
                st++;
                continue;
            }
            if (st == 0 && s[i] != '*')
                a += s[i];
            else
                st--;
        }

        reverse(a.begin(), a.end());
        return a;
    }
};

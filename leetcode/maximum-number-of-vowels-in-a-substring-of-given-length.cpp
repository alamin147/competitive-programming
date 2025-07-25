class Solution {
public:
    int maxVowels(string s, int k) {
        int l=0,r=0;
        int maxi=-1;
        int v=0;
        while(l<s.size()&&r<s.size())
        {
            if(isVowel(s[r]))
            {
                v++;
            }

            if(r-l+1==k)
            {
                maxi=max(v,maxi);
                if(isVowel(s[l]))
                {
                    v--;
                    v=max(v,0);
                }
                l++;
            }
            r++;
        }
        return maxi;
    }
    private:
    bool isVowel(char a)
    {
        a=tolower(a);
        return a=='a'||a=='e'||a=='i'||a=='o'||a=='u';
    }
};

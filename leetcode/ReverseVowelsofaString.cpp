class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0,j=n-1;

        while(i<j)
        {
            if(!isVowel(s[i]))
            i++;
            if(!isVowel(s[j]))
            j--;
            if(isVowel(s[i])&&isVowel(s[j]))
            {
                swap(s[i],s[j]);
                i++,j--;
            }
        }
    return s;
    }
    private:
    bool isVowel(char a)
    {
        a=tolower(a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
        return true;
        return false;
    }
};

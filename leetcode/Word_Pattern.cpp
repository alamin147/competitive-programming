class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>chartoword;
        map<string,char>wordtochar;
        stringstream ss(s);
        string word;
        int i=0;
        while(ss>>word)
        {
            if (i >= pattern.size()) return false;
            char curChar=pattern[i];
            if(chartoword.count(curChar))
            {
                if(chartoword[curChar]!=word)
                return false;
            }
            else
            {
                chartoword[curChar]=word;
            }

            if(wordtochar.count(word))
            {
                if(wordtochar[word]!=curChar)
                return false;
            }
            else
            wordtochar[word]=curChar;
            i++;

        }

        return i==pattern.size();
    }
};

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>m1,m2;
        multiset<int>v1,v2;
        set<char>c1,c2;
        for(auto c:word1)
        {
            m1[c]++;
            c1.insert(c);
        }
        for(auto [x,n]:m1)
        v1.insert(n);

        for(auto c:word2)
        {
            m2[c]++;
            c2.insert(c);
        }
        for(auto [x,n]:m2)
        v2.insert(n);

        return(v1==v2&&c1==c2);

    }
};

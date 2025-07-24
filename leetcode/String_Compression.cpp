class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>v;
        chars.push_back('-');
        int c=1;
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i]==chars[i+1])
            c++;
            else
            {
                if(c==1)
                {
                    v.push_back(chars[i]);
                    c=1;
                    continue;
                }
                v.push_back(chars[i]);
                string a = to_string(c);
                for(int j=0;j<a.size();j++)
                {
                    v.push_back(a[j]);
                }
                c=1;
            }
        }
        chars=v;
        return v.size();
    }
};

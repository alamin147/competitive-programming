class Solution {
public:
    vector<string>v={"1"};

    string countAndSay(int n) {
      for(int i=0;i<n-1;i++)
      {
        string prev=v.back(),newstr="";
        char curr=prev[0];
        int c=0;
        for(int j=0;j<prev.size();j++)
        {
            if(prev[j]==curr)
            c++;
            else{
                newstr+=to_string(c);
                newstr+=curr;
                curr=prev[j];
                c=1;
            }
        }
        newstr+=to_string(c);
        newstr+=curr;
        v.push_back(newstr);
      }
        return v[n-1];
    }
};

class Solution {
public:
    string convertToTitle(int columnNumber) {

        string ans;

        while(columnNumber){
            columnNumber--;

            int rem=columnNumber%26;
            ans.push_back('A'+rem);

            columnNumber/=26;
        }

        reverse(begin(ans),end(ans));
        return ans;

    }
};

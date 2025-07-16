class Solution {
public:
    string addBinary(string a, string b) {
        string c;
        int carry=0,i=a.size()-1,j=b.size()-1;
        while (i >= 0 && j >= 0)
        {
            int sum = (a[i] - '0') + (b[j] - '0') + carry;
            c += (sum % 2) + '0';
            carry = sum / 2;
            i--; j--;
        }
        while (i >= 0)
        {
            int sum = (a[i] - '0') + carry;
            c += (sum % 2) + '0';
            carry = sum / 2;
            i--;
        }
        while (j >= 0)
        {
            int sum = (b[j] - '0') + carry;
            c += (sum % 2) + '0';
            carry = sum / 2;
            j--;
        }

        if(carry==1)
        c+='1';
        reverse(c.begin(),c.end());
        return c;

    }
};

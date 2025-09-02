class Solution {
public:
    string multiply(string num1, string num2) {
        const int n = num1.size(), m = num2.size(), tot = n + m;
        if (num1 == "0" || num2 == "0") return "0";
        vector<int> res(tot, 0);
        for (int i = n - 1; i >= 0; --i) {
            int a = num1[i] - '0';
            for (int j = m - 1; j >= 0; --j) {
                int b = num2[j] - '0';
                int sum = res[i + j + 1] + a * b;
                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }
        int i = 0;
        while (i < tot && res[i] == 0) ++i;
        string ans;
        ans.reserve(tot - i);
        while (i < tot) ans.push_back('0' + res[i++]);
        return ans;
    }
};

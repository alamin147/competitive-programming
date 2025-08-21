class Solution {
public:
    int myAtoi(string s) {
        try {
            long long num = stoll(s);
            if (num > INT_MAX) return INT_MAX;
            if (num < INT_MIN) return INT_MIN;

            return (int)num;
        } catch (const std::out_of_range& e) {

            if (!s.empty() && s.find('-') != string::npos)
                return INT_MIN;
            else
                return INT_MAX;
        } catch (...) {

            return 0;
        }
    }
};

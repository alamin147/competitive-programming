class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        for (int i = 0; i < 32; ++i) {
            bool abit = (a >> i) & 1;
            bool bbit = (b >> i) & 1;
            bool cbit = (c >> i) & 1;

            if (cbit == 0) {
                if (abit) ++flips;
                if (bbit) ++flips;
            } else {
                if (!abit && !bbit) ++flips;
            }
        }
        return flips;
    }

};

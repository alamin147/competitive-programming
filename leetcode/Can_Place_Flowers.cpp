class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0)
            return true;

        int s = flowerbed.size();
        if (s == 1 && flowerbed[0] == 0) {
            flowerbed[0] = 1;
            n--;
            return n == 0;
        }

        else if (s == 2) {
            if (flowerbed[0] == 0&& flowerbed[1] == 0) {

                flowerbed[0] = 1;
                n--;
            }
            return n == 0;
        }

        for (int i = 0; i < s; i++) {
            if (n == 0) {
                return true;
            }
            if (i == 0) {
                if (flowerbed[i] == 0 && flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }

            else if (i == s - 1) {
                if (flowerbed[i] == 0 && flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            } else {
                if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 &&
                    flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return n == 0;
    }
};

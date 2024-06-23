#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        if (x < 10) {
            return true;
        }
        vector<char> v;

        while (x != 0) {
            v.push_back(((x % 10) - '0' + 48));
            x = x / 10;
        }

        for (int i = 0; i < v.size() / 2; i++) {
            if (v[i] == v[v.size() - 1 - i])
                continue;
            else
                return false;
        }
        return true;
    }
};
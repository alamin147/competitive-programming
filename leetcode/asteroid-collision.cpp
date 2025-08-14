class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for (int ast : asteroids) {
            bool destroyed = false;

            while (!s.empty() && s.top() > 0 && ast < 0) {
                if (abs(s.top()) < abs(ast)) {
                    s.pop();
                    continue;
                } else if (abs(s.top()) == abs(ast)) {
                    s.pop();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                s.push(ast);
            }
        }

        vector<int> res;
        while (!s.empty()) {
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

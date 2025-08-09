class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)
        return false;
        for(int i=0;i<32;i++)
        {
            long long p=1<<i;
            if(p==n)
            return true;
        }
        return false;
    }
};

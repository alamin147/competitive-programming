class Solution {
public:
    double myPow(double x, int n) {
        double pow=1;
        int tem=n;
        while(n!=0)
        {
            if(n%2!=0)
            pow*=x;
            x*=x;
            n=n/2;
        }
        if(tem>0)
        return pow;
        else
        return 1/pow;
    }
};

#include <stdio.h>

int main() {


    long long int test;
    scanf("%lld", &test);
    while (test--) {
        long long int n;
        long long int num1, num2;

        scanf("%lld", &n);

        if (n % 3 == 0) {
           num1 = n/3;
           num2=n/3;

        } else {

            num1 = n / 3;
            num2 = num1 + 1;
            if ((num1 + num2 * 2) != n) {
                num2=num2-1;
                num1=num1+1;
            }

        }
        printf("%lld %lld\n", num1, num2);
    }
}

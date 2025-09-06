#include <cstdio>
int t, n;
int main()
{
    scanf("%d", &t);
    while(t--)
    {
        int T,i;
        scanf("%d", &n);
        for (i = 0; --n;)
            scanf("%d", &T), i += T;
        printf("%d\n", -i);
    }
}

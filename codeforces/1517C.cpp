#include <bits/stdc++.h>
using namespace std;
int n, p[510], a[510][510];
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        cin >> a[i][i];
    for (int i = 0; i < n; i++)
    {
        int now = a[i][i] - 1, x = i, y = i;
        while (now--)
        {
            if (y > 0 && !a[x][y - 1])
                y--;
            else
                x++;
            a[x][y] = a[i][i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

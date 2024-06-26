#include <bits/stdc++.h>
using namespace std;
#define lld long long int
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define forn for (int i = 0; i < n; i++)
#define fornj for (int j = 0; j < n; j++)

int minJumps(int arr[], int n)
{
    int move = 1;

    if (n == 1)
        return move;

    if (arr[0] == 0)
        return -1;

    for (int i = 0; i < n; i++)
    {
        if (n - 1 != i && arr[i] == 0)
            return move;
        if (n - 1 == i)
            return move;

        int start = i + 1;
        int ending = arr[i] + i;
        int maxi = arr[i + 1];
        int jumpedto = i + 1;
        for (int j = start; j <= ending; j++)
        {
            // n-i+1
            // 8 3 27 13 13
            // 0 1 2  3  4
            if (arr[j] > n - i + 1)
            {
                move++;
                return move;
            }
            if (arr[j] == NULL)
                break;

            if (arr[j] >= maxi)
            {
                maxi = arr[j];
                jumpedto = j;
            }
        }

        i = jumpedto - 1;
        move++;
    }

    return move;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif
    int arr[] = {10, 14, 29, 21, 17, 4, 18, 20, 18, 22, 21, 14, 27, 12, 3, 28, 17, 0, 2, 18, 8, 20, 26, 16, 9, 23, 25, 20, 7, 27, 5, 7, 16, 5, 25, 11, 3, 7, 2, 17, 14, 6, 12, 14, 23, 25, 26, 5, 18, 1, 6, 10, 9, 12, 2, 25, 29, 12, 19, 4, 8, 5, 8, 30, 2, 22, 24, 30, 7, 24, 8, 15, 16, 2, 11, 20}, n = 76;

    cout << minJumps(arr, n) << endl;
}
/*
Minimum no. of Jumps to reach end of an array
arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} outpuut-3

First jump from 1st element to 2nd
element with value 3. Now, from here
we jump to 5th element with value 9,
and from here we will jump to the last.
*/

#include <stdio.h>

void input_output()
{
    //  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

int main()
{
    // input_output();
    int n = 11;
    scanf("%d", &n);
    // int arr[] = {1, 4, 3, 2, 6, 7};
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int error = 0;
    int count = 0;

    if (n == 1)
        printf("1\n");

    else
    {
        for (int i = 0; i < n;)
        {
            if (arr[i] == 0)
            {
                error = 1;
                break;
            }
            int tem = arr[i];
            i += tem;
            count++;
            if (i + 1 >= n)
                break;
        }
        if (error == 0)
            printf("%d\n", count);
        else
            printf("-1\n");
    }
}
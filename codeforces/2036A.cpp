#include <iostream>
using namespace std;
int t, n, i, j;
bool k;
int main()
{
    for (cin >> t; t--; cout << (k ? "NO\n" : "YES\n"))
        for (cin >> n >> i, k = 0; --n; i = j)
            if (cin >> j, abs(j - i) != 5 && abs(j - i) != 7)
                k = 1;
    return 0;
}

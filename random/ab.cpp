#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        if (x >= y && x != y + 1)
            cout << 0 << "\n";
        else
        {
            x--;
            if(x==0)
            x++;
            cout << y / x << "\n";
        }
    }
}

#include <bits/stdc++.h>
using namespace std;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int newLift = (abs(b - c) + abs(c));
        int mini = min(a, newLift);

        if (a == newLift)
            cout << "3\n";
        else if (mini == a)
            cout << "1\n";
        else if (mini == newLift)
            cout << "2\n";
    }
}
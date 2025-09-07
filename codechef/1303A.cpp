#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int c = 0;

        for (int i = a.find('1'); i < a.find_last_of('1'); i++)
        {
            if (a[i] == '0')
                c++;
        }
        cout << c << endl;
    }
}

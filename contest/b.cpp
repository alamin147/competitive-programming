#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fn(s, e, in) for (int i = s; i < e; i += in)
#define s(a) sort(a.begin(), a.end())
#define prn(c) cout << c << "\n"
#define cc cout << "\n"
#define pab(a, b) cout << a << " " << b
#define pa(a) cout << a << " "
#define vc(v, n, l) vector<l> v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);

void alfa()
{
    int n, m, k;
    cin >> n >> m >> k;
    if (k == 0)
        prn(n * m);
    elif (n == k)
        prn((n * m) - n);
    elif (m == k)
        prn((n * m) - m);
    else
    {
        int total = n * m;
        int mini = 0;

        for (int i = 1; i < n; i++)
        {
            int bmin = i * m;
            if (bmin >= k)
                mini = max(mini, total - bmin);
            bmin = (n - i) * m;
            if (bmin >= k)
                mini = max(mini, total - bmin);
        }

        for (int j = 1; j < m;j++)
        {
            int bmin = j * n;
            if (bmin >= k)
                mini = max(mini, total - bmin);

            bmin = (m - j) * n;
            if (bmin >= k)
                mini = max(mini, total - bmin);
        }
        cout<<(mini)<<endl;
    }
}
int main()

{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        alfa();
}

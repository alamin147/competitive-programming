// Hint: https://www.youtube.com/watch?v=-LvHA9LzzDQ
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fn(s, e, in) for (int i = s; i < e; i += in)
#define s(a) sort(a.begin(), a.end())
#define prn(c) cout << c << "\n"
#define cc cout << "\n"
#define pr(a, b) cout << a << " " << b
#define pra(a) cout << a << " "
#define vc(v, n, l) vector<l> v(n)
#define elif else if


void alfa()
{
    ll n, w;
    cin >> n >> w;

    vc(v, n, ll);
    vc(bits,20,int);


    fn(0, n, 1)
    {
        cin >> v[i];
    }
    fn(0, n, 1)
    {
        int a=log2(v[i]);
        bits[a]++;
    }
    int ans=0;

    while(n>0)
    {
        ll tem=w;
        for(int j=19;j>=0;j--)
        {
            if(bits[j]!=0)
            {
                ll p = pow(2,j);
                if(p<=tem)
                {
                    ll tems=tem/p;
                    tems=min((ll)bits[j],tems);

                    tem-=(p*tems);
                    bits[j]-=tems;
                    n-=tems;
                }

            }
        }
        ans++;
    }
    prn(ans);

    // for(auto i:bits)
    // cc;
    // cc;
    
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

#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
}

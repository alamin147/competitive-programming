#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define abs(a) if(a<0)a=-a
#define vc(v,n) vector<int>v(n)

void alfa()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // 0 1 2 3

    int first = 0, i = 0;
    int last = n - 1;
    int saima = 0, daima = 0;
    while (1)
    {

        if (i % 2 == 0)
        {
            if (a[first] >= a[last])
            {
                saima += a[first];
                first++;
            }
            else
            {
                saima += a[last];
                last--;
            }
        }
        else
        {
            if (a[first] >= a[last])
            {
                daima += a[first];
                first++;
            }
            else
            {
                daima += a[last];
                last--;
            }
        }
        i++;

        if (i == n)
            break;
    }
    cout << saima << " " << daima << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin>>t;
    // while(t--)
        alfa();
}

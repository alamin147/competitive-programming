#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pr(a,b) cout << a <<" "<<b
#define pra(a) cout << a <<" "
#define abs(a) if(a<0)a=-a
#define vc(v,n) vector<int>v(n,0)

void alfa()
{
    int n;
    cin>>n;
    vector<int>ans;
    
    int ar[n][n-1];
    vc(c,n+1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            cin>>ar[i][j];
        }
    }

    map<int,int>m;

    for(int i=0;i<n;i++)
    {
        m[ar[i][n-2]]++;
    }

    int unival,nonuni;
    for(auto [x,y]:m)
    {
        if(y==1)
        unival=x;
        else
        nonuni=x;

    }

    int prnt_row;
    for(int i=0;i<n;i++)
    {
        if(ar[i][n-2]==unival)
        {
            prnt_row=i;
            break;
        }
    }

    for(int j=0;j<n-1;j++)
        pra(ar[prnt_row][j]);
    
    pra(nonuni);
    cc;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
        alfa();

}
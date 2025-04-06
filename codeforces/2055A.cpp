#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(inzt i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define as(a) if(a<0)a=-a;
void alfa()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ans=a-b;
    as(ans);

    if((ans%2!=0)||(a==1&&b==2)||(a==n&&b==n-1))
        pn;//b
    else
        py;//a

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

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout<<c<<"\n"
#define fn for(int i=0;i<n;i++)


void alfa()
{
    int n;
    cin>>n;
    int one=0;
    fn
    {
        int tem;
        cin>>tem;
        if(tem==1)
            one++;
    }

    int c=0;
    c+=(one+1)/2;
    c+=n-one;
    prn(c);

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

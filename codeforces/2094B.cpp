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
#define vc(v,n) vector<int>v(n)
#define elif else if
bool validIndex(int i,int n){
    return i>=0 && i<n;
}

void alfa()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a==b)
    {
        cout<<c<<" "<<d<<endl;
    }
    else
    {
        int l=0,r=0;
        while(b!=0)
        {
            if(c<=l-1)
            {
                l--;
                b--;
            }
            if(b!=0&&r+1<=d)
            {
                r++;
                b--;
            }
            
        
        }
        cout<<l<<" "<<r<<endl;
    }
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
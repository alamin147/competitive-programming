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
    return i >= 0 && i < n;
}

void alfa()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;

    string c,d;
    
    fn
    {
        if(i%2==0)
            c+=a[i];
        else
            c+=b[i];
    }
    
    fn{
        if(i%2==0)
            d+=b[i];
        else
            d+=a[i];
    }
    // prn(c);
    int c1=0;
    for(auto i:c)
        if(i=='0')
            c1++;

    int d1=0;
    for(auto i:d)
        if(i=='0')
            d1++;
    // prn(d);

    if((n+1)/2<=c1&&(n/2)<=d1)
        py;
    else
        pn;
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

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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int chef=0,chefa=0;
    fn
    {
        if(a[i]==b[i])
            continue;
        elif((a[i]=='R'&&b[i]=='S')||(a[i]=='S'&&b[i]=='P')||(a[i]=='P'&&b[i]=='R'))
            chef++;
        elif((b[i]=='R'&&a[i]=='S')||(b[i]=='S'&&a[i]=='b')||(b[i]=='P'&&a[i]=='R'))
            chefa++;
    }

    if(chef>=chefa)
        prn(0);
    else
        prn(chefa-chef);
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
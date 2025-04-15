//https://www.youtube.com/watch?v=9tvP9Z9Kybc

#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
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
    map<ll,int>m;
    
    fn
    {
        ll x;
        cin>>x;
        m[x]++;
    }

    int maxi=0;
    for(auto [key,val]:m)
    {
        maxi=max(maxi,val);
    }

    if(n%2==0)
    {
        if(maxi<=n/2)
            prn(0);
        else
            prn(2*maxi-n);
    }

    else
    {
        if(maxi<=n/2)
            prn(1);
        else
            prn(2*maxi-n);
    }
}

int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
        alfa();

}
    
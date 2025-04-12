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
    string a;
    cin>>a;
    vector<ll>p;
    fn
    {
        if(a[i]=='L')
            p.push_back(i);
        else
            p.push_back(n-i-1);
    }

    sort(p.begin(),p.end());
    ll s=accumulate(p.begin(),p.end(),0LL);

    for(auto &i:p)
    {
        s-=i;
        i=max(i,n-i-1);
        s+=i;
        pra(s);
    }
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

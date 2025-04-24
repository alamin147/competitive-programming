#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn(s,e,in) for(int i=s;i<e;i+=in)
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
    int n,k;
    cin>>n>>k;

    int maxi=INT_MIN;
    int minus=0;
    vector<int>v,b;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        maxi=max(t,maxi);
        v.push_back(t);

    }
    bool eq=false;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t==-1)
        minus++;
        b.push_back(t);
        if(t==k)
        eq=true;
    }

    if(minus==n)
    {
        sort(v.begin(),v.end());
        prn(n-v[((n+1)/2)-1]);
        
    }
    else
    {
        if(eq==true)
            prn(0);
        else
            prn(1);
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

 #ifndef ONLINE_JUDGE
            cerr<<"Time: "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
        #endif
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn(s,e,in) for(int i=s;i<e;i+=in)
#define ss(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pab(a,b) cout << a <<" "<<b
#define pa(a) cout << a <<" "
#define vc(v,n,l) vector<l>v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);

void alfa()
{
    int n;
    cin>>n;
    vc(v,n,int);
    fn(0,n,1)
    cin>>v[i];

    string a;
    cin>>a;

    vc(pre,n+1,ll);

    fn(1,n+1,1)
    pre[i]=pre[i-1]+v[i-1];

    ll l=0,r=n-1,ans=0;
    while(l<r)
    {
        if(a[l]=='L'&&a[r]=='R')
        {
            ans+=pre[r+1]-pre[l];
            l++,r--;
        }
        if(a[l]=='R')
        l++;
        if(a[r]=='L')
        r--;
    }
    prn(ans);
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


bool validIndex(int i,int n){
    return i>=0 && i<n;
}
bool isEven(int n){
    return n%2==0;
}

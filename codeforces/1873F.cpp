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
    int n,k;
    cin>>n>>k;

    vc(a,n,ll);
    vc(h,n,ll);
    fn(0,n,1)
    cin>>a[i];
    fn(0,n,1)
    cin>>h[i];


    ll l=0,r=0;
    ll len=0;
    ll s=0;
    while(r<n)
    {
        if(h[r-1]%h[r]==0)
        {
            s+=a[r];
        }
        else
        {
            s=a[r];
            l=r;
        }
        while(s>k)
        {
            s-=a[l];
            l++;
        }
        len=max(len,r-l+1);
        r++;
    }
    prn(len);
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

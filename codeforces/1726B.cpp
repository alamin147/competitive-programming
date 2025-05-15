#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn(s,e,in) for(int i=s;i<e;i+=in)
#define s(a) sort(a.begin(),a.end())
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
    ll n,m;
    cin>>n>>m;
    if(m<n||(n%2==0&&m%2!=0))
    pn;
    else
    {
        py;
        if(n==1)
        prn(m);
        else
        {
            if(n==m)
            {
                for(ll i=1; i<=n; i++)
                    pa(1);
                cc;
            }
             else if(n%2!=0)
            {
                for(ll i=1; i<=n-1; i++)
                    pa(1);
                prn(m-n+1);
            }
            else
            {
                for(ll i=1; i<=n-2; i++)
                    pa(1);
                pab((m-n+2)/2,(m-n+2)/2);
                cc;
            }
        }
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


bool validIndex(int i,int n){
    return i>=0 && i<n;
}
bool isEven(int n){
    return n%2==0;
}

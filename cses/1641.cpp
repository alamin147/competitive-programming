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
    ll n,x;
    cin>>n>>x;
    vector<ll>v;
    map<ll,ll>m;
    fn(0,n,1)
    {
        ll tt;
        cin>>tt;
        if(!m.count(tt))
        v.push_back(tt);
    }
    n = v.size();
    fn(0,n,1)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(i!=j&&j!=k&&i!=k)
                {
                    ll a=v[i]+v[j]+v[k];
                    if(a==x)
                    {
                        pab(v[i],v[j]);
                        cout<<" ";
                        prn(v[k]);
                        return;
                    }
                }
            }
        }
    }
    prn("IMPOSSIBLE");
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin>>t;
    // while(t--)
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

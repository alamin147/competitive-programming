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
    ll n,s,sum=0;
    cin>>n>>s;
    vc(v,n,ll);
    
    fn(0,n,1)
    {
        cin>>v[i];
    }
    ll l=0,r=0;
   
    ll len=0;
    multiset<ll>m;
    while(r<n)
    {
        m.insert(v[r]);
        auto mx=m.rbegin();
        auto mn=m.begin();

        if(*mx-*mn<=s)
        {
            len+=(r-l+1);
        }
        else
        {
            while (l<=r)
            {
                auto MX=m.rbegin();
                auto MN=m.begin();
                if(*MX-*MN<=s)
                {
                    break;
                }
                m.erase(m.find(v[l]));
                l++;
            }
            mx=m.rbegin();
            mn=m.begin();
            if(*mx-*mn<=s)
            {
                len+=(r-l+1);
            }
        }
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
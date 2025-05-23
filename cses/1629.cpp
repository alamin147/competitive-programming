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
    int n;
    cin>>n;

    vector<pair<ll,ll>>v;

    int t=n;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});

    }
    s(v);
    
    ll c=0,cur=0;
    for(ll i=0;i<n;i++)
    {
        if(i==0)
        {
            cur=v[i].second;
            c++;
        }
        elif(v[i].first>=cur)
        {
            c++;
            cur=v[i].second;
        }
        else
            cur=min(cur,v[i].second);
    }
    prn(c);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t;
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

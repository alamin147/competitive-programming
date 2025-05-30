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
ll gcd(ll a,ll b);
ll lcm(ll a,ll b);

void alfa()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll as=n/a;
    ll bs=n/b;
    ll cm=n/lcm(a,b);
    as=as-cm;
    bs=bs-cm;

    ll choco=as*p+bs*q;
    if(p<=q)
    choco+=(cm*q);
    else
    choco+=(cm*p);
    prn(choco);
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
ll gcd(ll a,ll b){
    return __gcd(a,b);
}
ll lcm(ll a,ll b){
    return ((a/__gcd(a,b))*b);
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define piza ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
bool isPrime(ll n);

void alfa()
{
    int m,n;
    cin>>m>>n;
    vector<tuple<int,int,int>>a(n);
    for(int i=0;i<n;i++)
    {
        int t,z,y;
        cin>>t>>z>>y;
        a[i]=make_tuple(t,z,y);
    }

    vector<int>can(n);
    auto check =[&](int mid)
    {
        vector<int>may(n);
        int has=m;
        for(int i=0;i<n;i++)
        {
            auto T=a[i];
            int t,z,y,total,can,rem,cur;
            t=get<0>(T);
            z=get<1>(T);
            y=get<2>(T);
            total=((t*z)+y);
            can=(mid/total);
            rem=mid%total;
            cur=((can*z)+min(z,(rem/t)));
            cur=min(has,cur);
            has-=cur;
            may[i]=cur;
        }
        if(!has)
        {
            fn(0,n,1)
            can[i]=may[i];
        }
        return (!has);
    };

int l=0,r=1e8,mid,ans;
while(l<=r)
{
    mid=l+(r-l)/2;
    if(check(mid))
    {
        ans=mid;
        r=mid-1;
    }
    else l=mid+1;
}
prn(ans);
for(auto i:can)
{
    pa(i);
}
cc;
}

int main()
{
    piza
    int t;

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
bool isPrime(ll n){
if(n<=1)return false;
if(n<=3)return true;
if(n%2==0||n%3==0)return false;
for(ll i=5;i*i<=n;i+=6){
if(n%i==0||n%(i+2)==0)return false;
}
return true;
}

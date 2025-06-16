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
    string t,p;
    cin>>t>>p;
    int n=t.size(),m=p.size();
    vc(v,n,ll);
    fn(0,n,1)
    cin>>v[i];

auto num=[&](ll mid)
{
    vc(b,n+1,bool);

  fn(0,mid,1)
  {
    b[v[i]]=true;
  }

  int j=0;
  bool found=false;
  fn(0,n,1)
  {
    if(t[i]==p[j]&&!b[i+1])
    j++;
    if(j==m)
    {
        found=true;
        break;
    }
  }
return found;
};
    int l=1,r=n,mid,ans=0;

    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(num(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    prn(ans);
}

int main()
{
    piza
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

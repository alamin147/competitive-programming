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
const int maxN=(1LL<<15);
vector<int>allP;
bool isPalindrome(int x)
{
    string s=to_string(x);
    int len=s.size();
    fn(0,len/2,1)
    if(s[i]!=s[len-i-1])
    return false;
return true;
}

void markP()
{
    fn(0,maxN,1)
    if(isPalindrome(i))
    allP.push_back(i);
}


void alfa()
{
    int n;
    cin>>n;
    vc(v,n,int);
    vc(cnt,maxN+1,int);
    fn(0,n,1)
    {
        cin>>v[i];
        cnt[v[i]]++;
    }
    ll ans=n;
    fn(0,n,1)
    {
        for(int j=0;j<allP.size();j++)
        {
            int curr=(v[i]^allP[j]);
            ans+=cnt[curr];
        }
    }
    prn(ans/2);

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    markP();
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

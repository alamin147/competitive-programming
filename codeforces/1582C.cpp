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
    int n,res=1e9;
    cin>>n;
    string s;
    cin>>s;
    for(char ch='a';ch<='z';ch++)
    {
        int l=0,r=n-1,ans=0;
        while(l<r)
        {
            if(s[l]==s[r])
                l++,r--;
            else if(s[l]==ch)
                l++,ans++;
            else if(s[r]==ch)
                r--,ans++;
            else
            {
                ans=1e9;
                break;
            }
        }
        res=min(res,ans);
    }
    cout << ((res==1e9)?-1:res) << '\n';
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
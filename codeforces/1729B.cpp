#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn(s,e,in) for(int i=s;i<e;i+=in)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pr(a,b) cout << a <<" "<<b
#define pra(a) cout << a <<" "
#define vc(v,n,l) vector<l>v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);

void alfa()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    vector<int>v;
    for(int i=a.size()-1;i>=0;i--)
    {
        if(a[i]!='0')
        {
            v.push_back(a[i]-'0');
        }
        else
        {
            char a2=a[i-1];
            char a1=a[i-2];
            int tem=(a1-'0')*10+(a2-'0');
            v.push_back(tem);
            i-=2; 
        }
    }

    for(int i=v.size()-1;i>=0;i--)
    {
        cout<<char('a'+v[i]-1);
    }
    cc;
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
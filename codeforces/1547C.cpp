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
    int k,n,m;
    cin>>k>>n>>m;

    vc(mono,n,int);
    vc(poly,m,int);
    vector<int>v(n+m);
    fn(0,n,1)
    cin>>mono[i];
    fn(0,m,1)
    cin>>poly[i];

    bool err=false;
    merge(mono.begin(),mono.end(),poly.begin(),poly.end(),v.begin());
    for(int i=0;i<n+m;i++)
    {
        if(v[i]==0)
        {
            k++;
        }
        else if(v[i]>k)
        {
            err=true;
            break;
        }
    }
    if(err)
    prn(-1);
    else
    {
    for(auto i:v)
        cout<<i<<" ";
        cc;
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

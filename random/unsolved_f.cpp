#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pr(a,b) cout << a <<" "<<b
#define pra(a) cout << a <<" "
#define vc(v,n) vector<int>v(n)
#define elif else if
bool validIndex(int i,int n){
    return i>=0 && i<n;
}

void alfa()
{
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    int az=0,ao=0,bz=0,bo=0;

    fn{
        if(a[i]=='1')
        ao++;
        else
        az++;
    }
    fn{
        if(b[i]=='1')
        bo++;
        else
        bz++;
    }

    if(ao==bo&&az==bz)
    {
        int misplace=0;
        fn{
            if(a[i]!=b[i])
                misplace++;
        }
        //01
        //10
        //2
        if(k==n&&misplace==k)
        pn;
        elif(k==misplace||misplace==k*2)
        py;
        else
        pn;
    }
    else
    pn;
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
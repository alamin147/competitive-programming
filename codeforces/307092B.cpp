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
#define vc(v,n) vector<int>v(n)
#define elif else if
bool validIndex(int i,int n){
    return i>=0 && i<n;
}

void alfa()
{
    int n,m;
    cin>>n>>m;
    vc(v1,n);
    vc(v2,m);
    vc(v,m+1);
    // vector<int>v;
    fn(0,n,1){
        cin>>v1[i];
    }
    fn(0,m,1){
        cin>>v2[i];
    }
    v[0]=0;
    int j=1,i=0,c=0;
    int q=1;
    while(j<=m){
        if(v1[i]<v2[j]){
            c++;
            i++;
        }
        else
        {
            v[j]=(c+v[j-1]);
            j++;
            c=0;
        }
    }

    int k=0;
    for(int i=0;i<=m;i++)
    {
        cout<<v[i]<<" ";
    }
    cc;
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
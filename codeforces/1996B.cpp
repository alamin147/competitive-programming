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
    int n,k;
    cin>>n>>k;

    vector<vector<char>>v(n, vector<char>(n)), ans;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    
    for(int i=0;i<n;i+=k)
    {
        for(int j=0; j<n; j+=k)
        {
            cout<<v[i][j];
        }
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
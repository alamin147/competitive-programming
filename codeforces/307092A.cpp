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
    vector<ll>v1(n),v2(m),ans;

    fn(0,n,1){
        cin>>v1[i];
    }
    fn(0,m,1){
        cin>>v2[i];
    }
    
    int i=0,j=0;
    
    while(i<n&&j<m)
    {
        
        if(v1[i]>v2[j])
            ans.push_back(v2[j++]);
        elif(v1[i]<v2[j])
            ans.push_back(v1[i++]);
        else
        {
            ans.push_back(v2[j++]);
            ans.push_back(v1[i++]);
        }
    }

    while (i<n)
    {
        ans.push_back(v1[i++]);
    }
    while (j<m)
    {
        ans.push_back(v2[j++]);
    }
    

    for(auto k:ans)
        pra(k);
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
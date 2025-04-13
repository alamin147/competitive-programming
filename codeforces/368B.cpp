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
    int n,m;
    cin>>n>>m;
    vector<int>v(n),d(n);
    set<int>s;
    fn{
        cin>>v[i];
    }
    reverse(v.begin(),v.end());
    fn{
        s.insert(v[i]);
        d[i]=(s.size());
    }
    reverse(d.begin(),d.end());
  
    for(int i=0;i<m;i++)
    {
        int t;
        cin>>t;
        cout<<d[t-1]<<"\n";
    }
    
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
}

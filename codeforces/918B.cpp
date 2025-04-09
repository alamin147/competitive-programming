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

    map<string, string>servers;

    fn
    {
        string name,ip;
        cin>>name>>ip;
        servers[ip]=name;

    }
    for(int i=0;i<m;i++)
    {
        string a,b;
        cin>>a>>b;
        string c= b.substr(0,b.size()-1);
        cout<<a<<" "<<b<<" #"<<servers[c]<<endl;
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

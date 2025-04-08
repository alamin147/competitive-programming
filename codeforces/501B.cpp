#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define pr(c) cout << c <<" "
#define prn(c) cout << c <<"\n"
#define abs(a) if(a<0)a=-a
#define vc(v,n) vector<int>v(n)

void alfa()
{
    map<string, string> m,oppm;
    int t;
    cin>>t;
    
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        auto it=oppm.find(a);
        if(it!=oppm.end())
        {
            string old = oppm[a];
            m[old]=b;
            oppm.erase(a);
            oppm[b]=old;
        }
        else
        {
            m[a]=b;
            oppm[b]=a;
        }
        
    }
    
    prn(m.size());

    for(auto [x,y]:m)
    {
        pr(x);
        pr(y);
        cout<<endl;
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

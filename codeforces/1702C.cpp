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
    map<ll,set<int>>m;
    fn{
        ll tem;
        cin>>tem;
        m[tem].insert(i);
       
    }
    for(int i=0;i<k;i++)
    {
        ll t,q;
        cin>>t>>q;
        if(!m[t].empty()&&!m[q].empty())
        {
            if(*m[t].begin()<*m[q].rbegin())
                py;
            else 
                pn;
        }
        else 
            pn;
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
}

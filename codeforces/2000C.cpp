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
    int n;
    cin>>n;
    vector<ll>v(n);
    fn(0,n,1)
    {
        cin>>v[i];
    }
    int m;
    cin>>m;
    fn(0,m,1)
    {
        string a;
        cin>>a;
        
        bool found=true;
        
        if(a.size()!=n)
        {
            pn;
            continue;
        }
        map<char,ll>m;
        map<ll,char>mp;
        

        fn(0,n,1)
        {
            char aa=a[i];
            ll num=v[i];

            if(m.count(aa))
            {
                if(m[aa]!=num)
                {
                    found=false;
                    break;
                }
            }
            else{
               m[aa]=num;
            }

            if(mp.count(num))
            {
                if(mp[num]!=aa)
                {
                    found=false;
                    break;
                }
            }
            else
            {
                mp[num]=aa;
            }
        }
        if(found)
            py;
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

 #ifndef ONLINE_JUDGE
            cerr<<"Time: "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
        #endif
}

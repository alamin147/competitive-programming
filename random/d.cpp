#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end(),greater<int>())
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
    int n,k,l;
    cin>>n>>k>>l;
    vector<int>v;
    fn{
        int ni,li;
        cin>>ni>>li;
        
        if(l==li)
        {
            v.push_back(ni);
        }
    }
    if(v.size()<k)
        prn(-1);
    else
    {
        s(v);
        int ss=0;
        for(auto i:v)
        {
            if(k<=0)
                break;
            if(k>0)
            {
                ss+=i;
                k--;
            }
            // cout<<i<<" ";
        }
        // cc;
        if(ss==0)
        prn(-1);
        else
        prn(ss);
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

//  #ifndef ONLINE_JUDGE
//             cerr<<"Time: "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
//         #endif
}
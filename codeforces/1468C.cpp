#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=1;i<=n;i++)
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
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int>v;
    int n;
    cin>>n;
    int c=1;
    fn{

        int type;
        cin>>type;
        if(type==1)
        {
            int money;
            cin>>money;
            s.insert({c,money});
            ml.insert({money,-(c)});
            c++;
        }
        elif(type==2)
        {
            int p=s.begin()->first, money=s.begin()->second;
            v.push_back(p);
            s.erase(s.begin());
            ml.erase({money,-p});
        }
        else
        {
            int p=-ml.rbegin()->second, money=ml.rbegin()->first;
            v.push_back(p);
            ml.erase(--ml.end());
            s.erase({p,money});
        }
    }

    for(auto i:v)
    cout<<i<<" ";
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
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
    int n,m,q;
    cin>>n>>m>>q;
    vector<int>teacher(m);
    fn(0,m,1)
    cin>>teacher[i];

    sort(teacher.begin(),teacher.end());

    while(q--)
    {
        int qi;
        cin>>qi;
        if(qi<teacher[0])
        {
            cout<<teacher[0]-1<<endl;
            continue;
        }
        if(qi>teacher[m-1])
        {
            cout<<n-teacher[m-1]<<endl;
            continue;
        }
        
        auto it=lower_bound(teacher.begin(),teacher.end(),qi);

        int r=*it;
        it--;
        int l=*it;

        int mid=(l+r)/2;
        cout<<min(abs(mid-l),abs(mid-r))<<endl;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn(s,e,in) for(int i=s;i<e;i+=in)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pab(a,b) cout << a <<" "<<b
#define pa(a) cout << a <<" "
#define vc(v,n,l) vector<l>v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);

void alfa()
{
    int n;
    cin>>n;
    ll aa;
    ll e=0,o=0;
    bool same=true;
    fn(0,n,1)
    {
        ll tt;
        cin>>tt;
        if(i==0)
        {
            aa=tt;
        }
        if(tt%2==0)
        e++;
        else
        o++;
        if(aa!=tt)
        {
            same=false;
        }
    }

    if(same)
    py;
    elif(n==2)
    pn;
    else
    {
        if(n%2==0)
        {
            if(e==o)
            py;
            else
            pn;
        }
        else
        {
            //odd
            if(o+1==e)
            py;
            else
            pn;

        }
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


bool validIndex(int i,int n){
    return i>=0 && i<n;
}
bool isEven(int n){
    return n%2==0;
}
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
    string a,b;
    cin>>a;
    bool zeroIn=false;
    for(int i=0;i<n;i++)
    {
        if(zeroIn==false&&a[i]=='0')
        {
            b+='0';
            zeroIn=true;
        }
        elif(a[i]=='1')
        {
            b+='1';
            zeroIn=false;
        }
    }

    int z=0,o=0;
    for(auto i:b)
    {
        if(i=='0')
        z++;
        else
        o++;
    }

    if(o>z)
    py;
    else
    pn;

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
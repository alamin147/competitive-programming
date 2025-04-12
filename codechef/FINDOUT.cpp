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
   int n;
   cin>>n;
   vector<ll>v(n);
   bool pos=false;
   fn{
       cin>>v[i];
       if(v[i]>0)
        pos=true;
   }
   s(v);
    if((v[0]==0&&n==1)||(v[0]==0&&v[n-1]==0))
        cout<<-1<<endl;
    elif(pos)
    {
        cout<<v[n-1]<<" "<<v[n-1]<<endl;
    }
    else
    {
        cout<<v[0]<<" "<<v[0]<<endl;
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

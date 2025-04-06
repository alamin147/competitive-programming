#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define abs(a) if(a<0)a=-a
#define vc(v,n) vector<int>v(n)

void alfa()
{
    int n;
    cin>>n;
    string a;
    cin>>a;

    int fb= a.find_first_of('B');
    int lb= a.find_last_of('B');
    prn(lb-fb+1);
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

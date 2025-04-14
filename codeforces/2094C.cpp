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
    int q=2*n;
    vector<int>v,freq(q+1,0);
    for(int i=0;i<n*n;i++)
    {
            int tt;
            cin>>tt;
            if(freq[tt]==0)
            {
                v.push_back(tt);
            }
            freq[tt]++;
    }
    int miss;
    for(int i=1;i<=q;i++)
    {
        if(freq[i]==0)
        miss=i;
    }

    cout<<miss<<" ";

    for(auto i:v)
    if(i!=0)
    cout<<i<<" ";
    cc;
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

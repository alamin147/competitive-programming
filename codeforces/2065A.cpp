#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"

void alfa()
{
    string s;
    cin>>s;
    int n=s.size();

    if(s[n-1]=='s' && s[n-2]=='u')
    {
        s[n-2]='i';
    }
    n--;

    fn
    {
        cout<<s[i];
    }
    cout<<endl;
    

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

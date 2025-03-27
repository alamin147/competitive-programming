#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)

void alamin()
{
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    map<char,int>m;

    for(int i=0;i<a.size();i++)
        m[a[i]]++;
    int o=0;
    for(auto i:m)
    {
        if(i.second%2!=0)
        o++; 
    }

    if(k>=o-1)
        py;
    else
    {
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
        alamin();
}
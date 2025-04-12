// https://www.youtube.com/watch?v=PJA-GRNtYFE
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
    string a;
    cin>>a;
    string b;
    map<char,int>m;

    fn{
        if(m[a[i]])
            continue;
        else
        {
            b+=a[i];
            m[a[i]]++;
        }
    }
    sort(b.begin(),b.end());

    // prn(b);
    map<char,char>mm;
    int ms=b.size();
    for(int i=0;i<((ms+1)/2);i++)
    {
        mm[b[i]]=b[ms-i-1];
        mm[b[ms-i-1]]=b[i];
    }

    for(auto i:a)
    {
        cout<<mm[i];
    }
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

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=1;i<n;i++)
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

char nextStr(char a)
{
    if(a=='z')
        return 'a';
    return a+1;
}
void alfa()
{
    string a;
    cin>>a;

    int n=a.size();
    if(n==1)
    {
        cout<<a<<nextStr(a[0])<<endl;
        return;
    }
    fn
    {
        if(a[i]==a[i-1])
        {
            a.insert(a.begin()+i,nextStr(a[i]));
            prn(a);
            return;
        }
        
    }
    cout<<a;
    prn(nextStr(a[n-1]));
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

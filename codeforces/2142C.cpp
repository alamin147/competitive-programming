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
    string a;
    cin>>a;
    reverse(a.begin(), a.end());
    int n=a.size();
    int b=0,B=0;


    string c;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='b')
            b++;
        elif(a[i]>='a'&&a[i]<='z')
        {
            if(b==0)
                c+=a[i];
            else
            {
                b--;
            }
        }
        elif(a[i]=='B')
            B++;
        elif(a[i]>='A'&&a[i]<='Z')
        {
            if(B==0)
                c+=a[i];
            else
            {
                B--;
            }
        }
    }
    reverse(c.begin(),c.end());
    prn(c);
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

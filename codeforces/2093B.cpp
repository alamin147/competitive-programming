#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=n-1;i>=0;i--)
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
    int n=a.size();
    int zero=0,digit=0, lastDigit=-1;

    fn
    {
        if(lastDigit==-1 &&a[i]!='0')
            lastDigit=i;
        if(a[i]=='0')
        zero++;
        else
        digit++;
    }

    if(zero==0)
    prn(n-1);
    //digit  in last
    elif(lastDigit==n-1){
        prn(digit-1);
    }
    else{
        prn(digit-1+n-lastDigit-1);
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

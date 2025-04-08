#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout <<" " << c <<"\n"
#define cc cout <<"\n"
#define pr(a,b) cout << a <<" "<<b
#define pra(a) cout << a <<" "
#define vc(v,n) vector<vector<string>>v(n)
#define elif else if
bool validIndex(int i,int n){
    return i>=0 && i<n;
}

void alfa()
{
    int n;
    cin>>n;
    vc(v,3);
    map<string,int>m;
    for(int j=0;j<3;j++)
    {
        fn{
            string a;
            cin>>a;
            v[j].push_back(a);
            m[a]++;
        }
    }

    int aa=0,bb=0,c=0;

    vector<string>av=v[0];
    for(auto i:av)
    {
        if(m[i]==1)
            aa+=3;
        elif(m[i]==2)
            aa+=1;
        else
            aa+=0;
    }
    vector<string>av2=v[1];
    for(auto i:av2)
    {
        if(m[i]==1)
            bb+=3;
        elif(m[i]==2)
            bb+=1;
        else
            bb+=0;
    }
    vector<string>av3=v[2];
    for(auto i:av3)
    {
        if(m[i]==1)
            c+=3;
        elif(m[i]==2)
            c+=1;
        else
            c+=0;
    }
    pr(aa,bb);
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

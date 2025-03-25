#include<bits/stdc++.h>
using namespace std;
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
void alamin()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    bool match=true;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            if((a[i]=='G'||a[i]=='B')&&(b[i]=='G'||b[i]=='B'))
            {
               continue;
            }
            else
            {
                match=false;
                break;
            }
        }
    }
    if(match)
        py;
    else
        pn;
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

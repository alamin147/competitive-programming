#include<bits/stdc++.h>
using namespace std;

void alamin()
{
    map<char,int> m;
    string s;
    cin>>s;

    for(int i=0;i<26;i++)
    {
        m['a'+i]=0;
    }

    for(char i:s)
    {
        m[i]++;
    }
    bool found=false;
    for(auto i:m)
    {
        if(i.second==0)
        { 
            cout<<i.first<<endl;
            found=true;
            break;
        }
    }

    if(found==false)
    {
        cout<<"None"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t=3;
    // while(t--)
    alamin();
}

#include<bits/stdc++.h>
using namespace std;

void alamin()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
         int m;
         cin>>m;
         string tem;
         cin>>tem;

         for(int j=0;j<tem.size();j++)
         {
            if(tem[j]=='D')
            {
                a[i]++;
                if(a[i]==10)
                {
                   a[i]=0;
                }
            }
            else
            {
                a[i]--;
                if(a[i]==-1)
                {
                   a[i]=9;
                }
            }
             
         }
    }
   
    for(int i: a)
    {
        cout<<i<<" ";
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
        alamin();
}

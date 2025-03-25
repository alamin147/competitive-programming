#include<bits/stdc++.h>
using namespace std;

void alamin()
{
   string a,b;
   cin>>a>>b;

   int len = min(a.size(),b.size());
   int c=0;
   for(int i=0;i<len;i++)
   {
       if(a[i]!=b[i])
       {
           c++;
       }
   }
   cout<<c<<endl;
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

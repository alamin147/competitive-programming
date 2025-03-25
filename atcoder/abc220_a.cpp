#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;

  int i=1;

  bool flag=false;
  while(c<=b)
  {
   if(a<=c&&c<=b)
   {
    flag=true;
    break;
   }
   i++;
   c=c*i;
  }
  
  if(flag)
  {
   cout<<c<<endl;
  }
  else
  {
   cout<<-1<<endl;
  }
}

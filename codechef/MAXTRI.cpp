#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int t;
   cin>>t;
   while(t--)
   {
    int n;
    cin>>n;
    if(n<=3)
    cout<<-1<<endl;
    else
    cout<<n+n-1+n-2<<endl;
   }
}
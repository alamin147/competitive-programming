#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){

int n,x;cin>>n>>x;
vector<int>a(n);

for(int i=0;i<n;i++)
cin>>a[i];

int f=-1,l=-1;
for(int i=0;i<n;i++)
if(a[i]){
    if(f<0)f=i;

    l=i;}

cout<<(l-f+1<=x?"YES\n":"NO\n");
}
}

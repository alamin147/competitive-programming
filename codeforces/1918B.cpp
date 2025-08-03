#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;int a[n],b[n];
		for(int i=0;i<n;++i)cin>>a[i];
		for(int i=0;i<n;++i)cin>>b[a[i]-1];
		for(int i=0;i<n;++i)cout<<i+1<<" ";
		cout<<endl;for(int i=0;i<n;++i)cout<<b[i]<<" ";
		cout<<endl;
	}
}

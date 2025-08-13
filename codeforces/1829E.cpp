#include<iostream>
using namespace std;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
long long sum=0;
void found(int x,int y,int a[][1005]){
	sum+=a[x][y];a[x][y]=0;
	for(int i=0;i<4;i++){
		int x1=x+dx[i];int y1=y+dy[i];
		if(a[x1][y1])found(x1,y1,a);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;int a[1005][1005]={0};sum=0;long long max1=0;
		for(int i=1;i<=n;i++)for(int j=1;j<=m;j++)cin>>a[i][j];
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]){
					found(i,j,a);
					if(max1<sum)max1=sum;
					sum=0;
				}
			}
		}
		cout<<max1<<endl;
	}
	return 0;
}

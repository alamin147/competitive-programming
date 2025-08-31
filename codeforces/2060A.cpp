#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,a[4];
	cin >> t;
	while(t--)
	{
		for(i=0;i<4;i++)
		cin >> a[i];
		set <int> b;
		b.insert(a[0]+a[1]);
		b.insert(a[2]-a[1]);
		b.insert(a[3]-a[2]);
		cout << 4-b.size()<< endl;
	 }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn(s,e,in) for(int i=s;i<e;i+=in)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pab(a,b) cout << a <<" "<<b
#define pa(a) cout << a <<" "
#define vc(v,n,l) vector<l>v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);

void alfa()
{
    int n;
    cin>>n;
    vc(v,n,int);
    fn(0,n,1)
    cin>>v[i];
    int c=0;
    fn(1,n,1)
    {
        if(v[i-1]>v[i])
        c++;
    }
    if(v[n-1]>v[0])
    c++;
    if(c>1)
    pn;
    else
    py;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
        alfa();

 #ifndef ONLINE_JUDGE
            cerr<<"Time: "<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
        #endif
}


bool validIndex(int i,int n){
    return i>=0 && i<n;
}
bool isEven(int n){
    return n%2==0;
}
while(_--){
		int n,f{0};
		cin>>n;
		for(int i=1; i<=n&&cin>>a[i]; i++) {
			if(a[i]<a[i-1]) f++;
		}
		if(a[n]>a[1]) f++;
		if(f>1) cout<<"NO\n";
		else cout<<"YES\n";
	}

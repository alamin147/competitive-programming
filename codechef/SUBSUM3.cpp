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
bool validIndex(int i, int n);
bool isEven(int n);

bool check(vector<int>& a, int i, int s, bool tt) {
    if (i == a.size())
    return tt && s % 3 == 0;
    if (check(a, i + 1, s + a[i], true)) return true;
    if (check(a, i + 1, s, tt)) return true;
    return false;
}

void alfa()
{
    int n;
    cin >> n;
    vc(a, n, int);
    fn(0, n, 1) cin >> a[i];
    if (check(a, 0, 0, false)) py;
    else pn;
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

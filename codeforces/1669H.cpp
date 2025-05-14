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
    int B=30;
    int n, K;
    cin >> n >> K;
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
       cin >> a[i];
    }
    vector<int> bits(B + 1);
    for (int i = 0;i < n;i++) {
       for (int k = B;k >= 0;k--) {
          if ((a[i] >> k) & 1) {
             bits[k]++;
          }
       }
    }
    int ans = 0;
    for (int k = B;k >= 0;k--) {
       if (bits[k] == n) {
          ans += (1LL << k);
       }
       else {
          int need = n - bits[k];
          if (K >= need) {
             ans += (1LL << k);
             K -= need;
          }
       }
    }
    cout << ans << '\n';
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

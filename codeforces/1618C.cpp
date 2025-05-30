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
      cin >> n;
      vector<long long> a(n);
      for (int i = 0;i < n;i++) {
         cin >> a[i];
      }
      long long G1 = 0, G2 = 0;
      for (int i = 0;i < n;i += 2) {
         G1 = __gcd(G1, a[i]);
      }
      for (int i = 1;i < n;i += 2) {
         G2 = __gcd(G2, a[i]);
      }

      long long ans = 0;
      bool ok = true;
      for (int i = 1;i < n;i += 2) {
         if (a[i] % G1 == 0) {
            ok = false;
         }
      }

      if (ok) {
         ans = G1;
      }
      else {
         ok = true;
         for (int i = 0;i < n;i += 2) {
            if (a[i] % G2 == 0) {
               ok = false;
            }
         }
         if (ok) {
            ans = G2;
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

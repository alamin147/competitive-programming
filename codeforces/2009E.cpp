#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define piza ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
ll gcd(ll a,ll b);
ll lcm(ll a,ll b);
bool isPrime(ll n);

ll getSum(ll N, ll K) {
   ll totalRange, totalSum, badValue, badSum, goodSum;
   badValue = K - 1;
   badSum = ((badValue * (badValue + 1LL)) / 2LL);
   totalRange = K + N - 1;
   totalSum = ((totalRange * (totalRange + 1LL)) / 2LL);
   goodSum = (totalSum - badSum);
   return goodSum;
}

void alfa() {
   ll n, k;
   cin >> n >> k;

   ll midSum = (getSum(n, k) / 2LL);

   auto check = [&](ll mid) {
      ll currSum = getSum(mid - 1, k);
      return currSum <= midSum;
      };

   ll l = 1, r = ((k + n - 1) - (k - 1)), mid, ans = 0;
   while (l <= r) {
      mid = l + (r - l) / 2LL;
      if (check(mid)) {
         ans = mid - 1;
         l = mid + 1;
      }
      else {
         r = mid - 1;
      }
   }

   ll remSum1 = abs(getSum(n, k) - getSum(ans, k));
   ll res = abs(getSum(ans, k) - remSum1);
   if ((ans + 1) <= n) {
      ll remSum2 = abs(getSum(n, k) - getSum(ans + 1, k));
      res = min(res, abs(getSum(ans + 1, k) - remSum2));
   }
   cout << res << '\n';
}

int main()
{
    piza
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
ll gcd(ll a,ll b){
return __gcd(a,b);
}
ll lcm(ll a,ll b){
return ((a/__gcd(a,b))*b);
}
bool isPrime(ll n){
if(n<=1)return false;
if(n<=3)return true;
if(n%2==0||n%3==0)return false;
for(ll i=5;i*i<=n;i+=6){
if(n%i==0||n%(i+2)==0)return false;
}
return true;
}

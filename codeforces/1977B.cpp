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

bool check_kth_bit_on_or_off(ll n, ll k) {
   return ((n >> k) & 1);
}
vector<int>v(32);
void print_on_and_off_bits(int n) {
   for (ll k = 32;k >= 1;k--) {
      if (check_kth_bit_on_or_off(n, k)) {
         v.push_back(1);
        }
        else {
          v.push_back(0);
      }
   }
}

void alfa()
{
    ll x;
    cin>>x;

    ll one =__lg(x);
    print_on_and_off_bits(x);
    if(one==0)
    prn(1);
    elif(one&1)
    {
        // odd

    }
    else
    {
        vector<int>a;
        int highBit= __builtin_clz(x);
        ll lastNum=(1<<(highBit-1));
        ll req=lastNum-x;
        for(int i=highBit-1;i>=0;i--)
        {
            if(v[i]==0)
            a.push_back(0);
            else
            {
                if((1<<(i+1))==req)
                a.push_back(-1);
                else
                a.push_back(1);
            }
        }
        for(auto i:a)
        pa(i);
        cc;
    }

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

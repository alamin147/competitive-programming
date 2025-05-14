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
    int a1,a2,a3,a4,a5;
    cin>>a1>>a2>>a3>>a4>>a5;
   vector<int> sss = {a1, a2, a3, a4, a5};
    ll sum = a1 + a2 + a3 + a4 + a5;

    if (sum >= 35) {
        prn(0);
        return;
    }

    s(sss);
    int coi = 0, i = 0;

    while (i<5) {
        sum += (10 - sss[i]);
        coi += 100;
        if(sum>=35)
        {
            prn(coi);
            break;
        }
        i++;
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

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn for(int i=0;i<n;i++)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pr(a,b) cout << a <<" "<<b
#define pra(a) cout << a <<" "
#define vc(v,n) vector<int>v(n)
#define elif else if
bool validIndex(int i,int n){
    return i>=0 && i<n;
}

void alfa()
{
    int n,k,d;
    cin>>n>>k>>d;

    vector<int>v(n);
    fn{
        cin>>v[i];
    }

    if(n==k)
    prn(0);
    elif(k==0)
    {
        int c=0;
        fn{
            if(v[i]<d)
            {
                c+=max(0,d-v[i]);
            }
            }
            prn(n+c);
        }
    else
    {
        int c=0;
        int initialTake=n-k;
        int canTake=initialTake;
        fn{
            if(canTake>0)
            {
                if(v[i]<d)
                {
                    c+=max(0,d-v[i]);
                    canTake--;
                }
            }
        }
        prn(c+initialTake);
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
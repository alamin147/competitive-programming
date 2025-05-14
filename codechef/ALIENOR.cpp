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
    ll N,K;
    cin >> N >> K;
    unordered_set<string> A(N);
    string input;
    for(ll i=0; i<N; i++)
    {
        cin >> input;
        A.insert(input);
    }

    vector<string> needed(K);
    for(ll i=0; i<K; i++){
        string local = "";
        for(ll j=0; j<K; j++){
            local += "0";
        }
        local[i] = '1';
        needed[i] = local;
    }
    bool err = false;
    for(auto n : needed){
        if(A.find(n) == A.end()){
            err = true;
            break;
        }
    }

    if (!err){
        py;
    }
    else{
        pn;
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

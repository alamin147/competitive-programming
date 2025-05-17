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

void alfa() {
    int n, k;
    cin >> n >> k;

    vc(a, n, int);
    fn(0, n, 1)
    cin >> a[i];

    s(a);

    map<int, int> freq;
    fn(0, n, 1)
    freq[a[i]]++;

    int L = -1, R = -1;
    int l = -1, r;

    fn(0, n, 1) {
        if (freq[a[i]] < k) continue;

        if (l == -1) l = a[i];

        if (i == n - 1 || a[i + 1] - a[i] > 1 || freq[a[i + 1]] < k) {
            r = a[i];
            if (r - l >= R - L) {
                L = l;
                R = r;
            }
            l = -1;
        }
    }

    if (L == -1)
    prn(-1);
    else
    pab(L, R), cc;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) alfa();

    #ifndef ONLINE_JUDGE
        cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
}

bool validIndex(int i, int n) {
    return i >= 0 && i < n;
}

bool isEven(int n) {
    return n % 2 == 0;
}

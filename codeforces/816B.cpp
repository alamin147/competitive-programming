#include <bits/stdc++.h>
using namespace std;

int main(){


    int n, k, q;
    cin >> n >> k >> q;

    vector<int> d(200002, 0);

    for(int i=0; i<n; i++){
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }

    vector<int> c(200002, 0);

    for(int i=1; i<200002; i++){
        c[i] = c[i-1]+d[i];
    }

    vector<int> p(200002, 0);

    for(int i=1; i<200002; i++){
        p[i] = p[i-1];
        if(c[i] >= k){
            p[i]++;
        }
    }

    for(int i=0; i<q; i++){
        int a, b;
        cin >> a >> b;

        cout << p[b] - p[a-1] << endl;
    }

    return 0;
}

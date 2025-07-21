#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n+1);
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    vector<int> l(m+1), r(m+1),d(m+1);

    for(int i=1; i<=m; i++){
        cin >> l[i] >> r[i] >> d[i];
    }

    vector<long long> opc(m+2, 0);
    for(int i=0; i<k; i++){
        int x, y;
        cin >> x >> y;
        opc[x]++;
        opc[y+1]--;
    }

    for(int i=1; i<=m; i++){
        opc[i] += opc[i-1];
    }

    vector<long long> fup(n + 2, 0);
    for(int i=1; i<=m; i++){
        if(opc[i] > 0){
            long long val = (long long)d[i]*opc[i];
            fup[l[i]] += val;
            fup[r[i]+1] -= val;
        }
    }

    for(int i=1; i<=n; i++){
        fup[i] += fup[i-1];
    }

    for(int i=1; i<=n; i++){
        a[i] += fup[i];
        cout <<a[i]<< (i == n? "" : " ");
    }
    cout << endl;

    return 0;
}

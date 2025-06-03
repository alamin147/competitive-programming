#include <bits/stdc++.h>
using namespace std;
#define ll long long

void alfa() {
    int n;
    ll x;
    cin >> n >> x;
    vector<pair<ll, int>> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i + 1; 
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        int l = i + 1, r = n - 1;
        while (l < r) {
            ll sum = v[i].first + v[l].first + v[r].first;
            if (sum == x) {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << "\n";
                return;
            } else if (sum < x) {
                ++l;
            } else {
                --r;
            }
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    alfa();

#ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int cnt = 0;
    while( !v.empty() && v.back() <= k ){
        cnt++;
        v.pop_back();
    }

    reverse(v.begin(), v.end());
    while( !v.empty() && v.back() <= k ){
        cnt++;
        v.pop_back();
    }
    cout << cnt << endl;

}

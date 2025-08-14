#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> leaf;
vector<vector<int>> adj;
int dfs(int n, int p)
{
    int ans = 0;
    for (auto it : adj[n])
    {
        if (it != p)
            ans += dfs(it, n);
    }
    if (ans == 0)
        ans = 1;
    return leaf[n] = ans;
}
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        adj.clear();
        leaf.clear();
        int n;
        cin >> n;
        adj.resize(n + 1);
        leaf.resize(n + 1);
        for (int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, -1);
        int q;
        cin >> q;
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            cout << leaf[x] * leaf[y] << endl;
        }
    }
}

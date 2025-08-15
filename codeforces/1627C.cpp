#include <bits/stdc++.h>
using namespace std;
int t, n, d[100001], ans[100001];
vector<pair<int, int>> g[100001];
void dfs(int u, int fa, int c)
{
    for (auto v : g[u])
    {
        if (v.first != fa)
        {
            ans[v.second] = c;
            dfs(v.first, u, 5 - c);
        }
    }
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int f = 0, p = -1;
        for (int i = 1; i <= n; i++)
            d[i] = 0, g[i].clear();
        for (int i = 1, u, v; i < n; i++)
        {
            cin >> u >> v;
            d[u]++, d[v]++;
            g[u].push_back({v, i}), g[v].push_back({u, i});
        }
        for (int i = 1; i <= n; i++)
            if (d[i] > 2)
                f = 1;
        if (f)
        {
            cout << "-1\n";
            continue;
        }
        for (int i = 1; i <= n; i++)
            if (d[i] == 1)
                p = i;
        dfs(p, 0, 2);
        for (int i = 1; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
    return 0;
}

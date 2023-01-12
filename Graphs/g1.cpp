#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> adj[100005];
int vis[100005];

void dfs(int node)
{
    cout << node << " ";
    vis[node] = 1;

    // traverse for all adj nodes and then go for depth
    for (auto it : adj[node])
    { // adj nodes me dfs krega agar visited nhi h toh
        if (vis[it] == 0)
        {
            dfs(it);
        }
    }
}

void dfsSolve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i);
        }
    }
}

int main()
{

    return 0;
}
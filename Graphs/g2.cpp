#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> adj[100005];
int vis[100005];

void bfs(int node)
{
    vis[node] = 1;
    queue<int> q;
    q.push(node);

    while (q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
}
void bfsSolve()
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
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            bfs(i);
        }
    }
}

int findMinimumMoves(int start, int end, int arr[], int n)
{
    int vis[end + 1];
    vis[start] = 1;
    queue<pair<int, int>> q;
    q.push({start, 0});

    while (!q.empty())
    {
        int node = q.front().first;
        int steps = q.front().second;

        if (node == end)
            return steps;
        q.pop();

        for (int i = 0; i < n; i++)
        {
            int dest = node * arr[i];
            if (dest <= end && !vis[dest])
            {
                q.push({dest, steps + 1});
                vis[dest] = 1;
            }
        }
    }
    return -1;
}

int main()
{

    return 0;
}
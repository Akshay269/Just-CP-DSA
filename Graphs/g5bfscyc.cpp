#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> adj[100005];
int vis[100005];

bool bfsCycle(int node)
{
    queue<pair<int, int>> q;
    q.push({node, 0});
    vis[node] = 1;

    while (!q.empty())
    {
        int node = q.front().first;
        int par = q.front().second;
        q.pop();

        for (auto it : adj[node])
        {
            if (vis[node] == 0)
            {
                q.push({it, node});
                vis[it] = 1;
            }
            else if (vis[it] == true && it != par)
                return true;
        }
    }
    return false;
}

void bfsCycleChecked()
{
    bool fl = false;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            if (bfsCycle(i) == true)
            {
                fl = true;
                break;
            }
        }
    }
    if (fl == true)
        cout << "cycle";
    else
        cout << "no cycle";
}
int main()
{

    return 0;
}
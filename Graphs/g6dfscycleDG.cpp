#include <bits/stdc++.h>
using namespace std;

int vs[10000], pathvis[10000];
bool dfsCycleDG(int node)
{
    vis[node] = 1;
    pathvis[node] = 1;

    for (auto it : adj[node])
    {
        if (!vis[it] == false)
        {
            if (dfsCycleDG(it) == true)
            {
                return true;
            }
        }
        else if (vis[it] == 1 && pathvis[it] == 1)
        {
            return true;
        }
    }
    pathvis[node] = 0;
    return false;
}
void dfsCycleChecker()
{
    bool fl = false;
    for (int i = 0; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            if (dfsCycleDG(i) == true)
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
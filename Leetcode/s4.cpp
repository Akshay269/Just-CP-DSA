#include <bits/stdc++.h>
using namespace std;

vector<char> parent;
char rootfind(char x)
{
    return parent[x] == x ? x : rootfind(parent[x]);
}

bool function(vector<string> e)
{
    int n = e.size();
    parent.resize(26, 0);
    for (int i = 0; i < 26; i++)
    {
        parent[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (e[i][1] == '=')
        {
            int x = rootfind(e[i][0] - 'a');
            int y = rootfind(e[i][3] - 'a');
            if (x != y)
                parent[y] = x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (e[i][1] == '!')
        {
            int x = rootfind(e[i][0] - 'a');
            int y = rootfind(e[i][3] - 'a');
            if (x == y)
                return false;
        }
    }
    return false;
}
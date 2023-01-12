#include <bits/stdc++.h>
using namespace std;

void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &v)
{
    vis[row][col] = 1;

    queue<pair<int, int>> q;
    q.push({row, col});
    int m = grid.size();    // row
    int n = grid[0].size(); // col

    while (!q.empty())
    {

        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        int offsets[] = {0, 1, 0, -1, 0};
        for (int k = 0; k < 4; k++)
        {

            int r = row + offsets[k], c = col + offsets[k + 1];
            if ((r >= 0) && (r < m) && (c >= 0) && (c < n) && (!vis[r][c]) && (grid[r][c] == '1'))
            {
                vis[r][c] = '1';
                q.push({r, c});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(m, vector<int>(n, 0)), vis(m, vector<int>(n, 0));
    int cnt = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            if ((!vis[row][col]) && (v[row][col] == '1'))
            {
                cnt++;
                bfs(row, col, vis, v);
            }
        }
    }
    return cnt;
}
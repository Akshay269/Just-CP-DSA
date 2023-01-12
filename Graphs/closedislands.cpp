#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &grid, int i, int j)
{
    int m = grid.size();
    int n = grid[0].size();

    // checking boundary conditions
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 1) 
        return;

    grid[i][j] = 0;
    
    dfs(grid, i + 1, j); // traversing in downward direction
    dfs(grid, i - 1, j); // traversing in upward direction
    dfs(grid, i, j + 1); // traversing in rightward direction
    dfs(grid, i, j - 1); // traversing in leftward direction
}
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i * j == 0 || i == m - 1 || j == n - 1) && grid[i][j] == 1)
            {
                dfs(grid, i, j);
            }
        }
    }

    int ct = 0;
    for (int i = 1; i < m - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (grid[i][j] == 0)
            {
                dfs(grid, i, j);
                ct++;
            }
        }
    }
    cout << ct << endl;

    return 0;
}
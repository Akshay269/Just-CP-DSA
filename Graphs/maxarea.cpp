class Solution {
    private:
int dfs(vector<vector<int>> &grid, int r, int c, int m, int n)
{
    
    if (r >= 0 && r < m && c >= 0 && c < n && grid[r][c] == 1)
    {
         grid[r][c] = 0;
         return 1+ dfs(grid, r, c - 1, m, n) + dfs(grid, r, c + 1, m, n) + dfs(grid, r + 1, c,m,n) + dfs(grid, r - 1, c,m,n);
    }
    return 0;
}
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max_area = 0;
    int m = grid.size();
    int n = grid[0].size();
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                int ar = dfs(grid, i, j, m, n);
                max_area = max(max_area, ar);
            }
        }
    }
    return max_area;
    }
};
struct node
{
    int x, y, time;
    node(int _x, int _y, int _time)
    {
        x = _x;
        y = _y;
        time = _time;
    }
} 
class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<node> q;
        int cntoranges = 0; // set count to get number of oranges (fresh+rotten)

        // push the rotten oranges to the queue
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 2)
                    q.push(node(i, j, 0));
                if (grid[i][j] != 0)
                    cntoranges++;
            }
        }
        while (!q.empty())
        {
            int x = q.front.x;
            int y = q.front.y;
            int time = q.front.time;
            q.pop();
            cnt++;

            int ans = max(ans, time);

            // technique to iterate the coordinates
            int dx[] = {-1, 0, +1, 0};
            int dy[] = {0, 1, 0, -1};

            for (int ind = 0; ind < 4; ind++)
            {
                int newX = x + dx[ind];
                int newY = y + dy[ind];

                if (newX >= 0 && newX < n && newY >= 0 && newY < m && grid[newX][newY] == 1)
                {
                    grid[newX][newY] == 2;
                    q.push(node(newX, newY, time + 1));
                }
            }
        }
        if(cnt==cntoranges) return ans;
        return -1;
    }
};
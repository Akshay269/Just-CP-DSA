
class Solution
{
public:
    bool hasPath(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination)
    {
        int n = maze.size();
        int m = maze[0].size();
        queue<pair<int, int>> q;
        q.push({start[0], start[1]});

        int vis[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vis[i][j] == 0;
            }
        }

        vis[start[0]][start[1]] == 1;

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if (x == destination[0] && y == destination[1])
                return true;

            int dx[] = {-1, 0, 1, 0};
            int dy[] = {0, 1, 0, -1};

            for (int ind = 0; i < 4; i++)
            {
                int newX = x;
                int newY = y;
                while (newX >= 0 && newX < n && newY >= 0 && newY < n && maze[newX][newY] == 0)
                {
                    newX += dx[ind];
                    newY += dy[ind];
                }
                newX -= dx[ind];
                newY -= dy[ind];

                if (vis[newX][newY] == 0)
                {
                    vis[newX][newY] == 1;
                    q.push({newX, newY});
                }
            }
        }
    }
};
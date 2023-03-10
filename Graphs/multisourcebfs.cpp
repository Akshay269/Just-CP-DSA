class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>vis(m,vector<int>(n,0));

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || j==0 || i==m-1 || j==n-1)
                {
                    if(grid[i][j]==1){
                    q.push({i,j});
                    vis[i][j]=1;
                    }
                }
            }
        }
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};

        while(!q.empty())
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

        for(int i=0;i<4;i++)
        {
                int newr=r+delrow[i];
                int newc=c+delcol[i];

            if(newr>=0 && newr<m && newc>=0 && newc<n && vis[newr][newc]==0 && grid[newr][newc]==1)
            {
            q.push({newr,newc});
            vis[newr][newc]=1;
            }
        }
        }
        int ans=0;
        for(int i=1;i<m-1;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==0) ans++;
            }
        }
        return ans;
    }
};
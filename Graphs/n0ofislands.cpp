//dfs easy one leetcode

class Solution {
    private:
      void dfs(int i,int j,vector<vector<char>>&grid,vector<vector<char>>&vis){
          int n=grid.size();
          int m=grid[0].size();
         if(i < 0 || j < 0 || j >= m || i >= n){
			return ;
		}
		if(grid[i][j] == '0' ){
			return ;
		}

		grid[i][j] = '0';
        vis[i][j]='1';
		dfs(i+1,j,grid,vis);
		dfs(i-1,j,grid,vis);
		dfs(i,j+1,grid,vis);
		dfs(i,j-1,grid,vis);
        //in place of this recursive calls we can use idx matrix of {-1, 0, 1, 0, -1} and revolve i j
      }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<char>>vis(m,vector<char>(n,'0'));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]=='0' && grid[i][j]=='1'){
                    vis[i][j]='1';
                    cnt++;
                    dfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
    }
};

//bfs 
class Solution {
private:
    void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &grid)
    {
        
        
        queue<pair<int,int>>q;
        q.push({row, col});
        int m=grid.size();    //row
        int n=grid[0].size(); //col
        
        while(!q.empty())
         {
            
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            
            
//             for(int delrow=-1;delrow<=1;delrow++)
//             {
                
//                 for(int delcol=-1;delcol<=1;delcol++)
//                 {
                    
//                     int mrow=row+delrow;
//                     int ncol=col+delcol;
                    
//              if((mrow>=0) && (mrow<m) && (ncol>=0) && (ncol<n) && (grid[mrow][ncol]=='1') && (!vis[mrow][ncol]))
//                     { 
//                         vis[mrow][ncol]=1;
//                         q.push({mrow,ncol});
//                     }
                    
//                 }
//              }

//you can use idx matrix of dfs one above given
            
            int offsets[] = {0, 1, 0, -1, 0};
            for (int k = 0; k < 4; k++) 
            {
                int r = row+ offsets[k], c = col + offsets[k + 1];
               if ((r >= 0) && (r < m) && (c >= 0) && (c < n) && (!vis[r][c]) && (grid[r][c]=='1')) 
               {
                 vis[r][c] = '1';
                 q.push({r, c});
                            
               }
            }
        }
    }
    
    
    
public:
    int numIslands(vector<vector<char>>&grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<int>>vis(m,vector<int>(n,0));
        
        int cnt=0;
        for(int row=0;row<m;row++)
        {
            for(int col=0;col<n;col++)
            {
                if((!vis[row][col]) && (grid[row][col]=='1'))
                {
                    vis[row][col]=1;
                    cnt++;
                    bfs(row,col,vis,grid);
                    
                }
            }
        }
        return cnt;
    }
};
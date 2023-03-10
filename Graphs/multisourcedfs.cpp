#include <bits/stdc++.h>
using namespace std;
/*
understand the problem

from leetcode discussions(butterman1986)---

I felt that the problem statement was difficult to understand as it and the associated example don't clearly indicate what surrounded means. An 'O' is surrounded if there is NO path from it to the boundary of the matrix (ie. row index 0, column index 0, row index matrix.length-1, column index matrix[0].length-1) when moving in a North, South, East, or West direction :). Hope this helps anyone else who was unclear.

*/

/*
key thing--
instead of doing dfs for all zeroes and checking which end up at boundary
do dfs from boundary and see all zeroes it reaches and store it in a 2D array visited
this saves time
now just make all non visited zeroes 'X'
*/


class Solution {
public:
    vector<vector<int>> dir={{0,1},{-1,0},{0,-1},{1,0}};
    
    bool isvalid(vector<vector<char>>& board,int i,int j)
    {
        int m=board.size();
        int n=board[0].size();
        if(i>=m||j>=n||i<0||j<0)
            return false;
        else
            return true;
    }
    void dfs(vector<vector<char>>& board,int i,int j,vector<vector<int>>& visited,int m,int n)
    {
        //iterative

        // if(visited[i][j])
        //     return;
        // visited[i][j]=1;
        // for(auto& d:dir)
        // {
        //     int x=i+d[0];
        //     int y=j+d[1];
        //     if(!isvalid(board,x,y)||visited[x][y]||board[x][y]=='X')
        //         continue;
        //     dfs(board,x,y,visited,m,n);
        // }


//recursive
int n=board.size();
       int m=board[0].size();
       if(r<0 || c<0 || c>=m || r>=n||board[r][c]=='X'||vis[r][c]=='V') return;
    
       vis[r][c]='V';

       dfs(r+1,c,board,vis);
       dfs(r-1,c,board,vis);
       dfs(r,c+1,board,vis);
       dfs(r,c-1,board,vis);

    }
    
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        if(m==0)
            return;
        int n=board[0].size();
        vector<vector<int>> visited(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
            if(board[i][0]=='O')
            dfs(board,i,0,visited,m,n);
            if(board[i][n-1]=='O')
            dfs(board,i,n-1,visited,m,n);
        } 
        for(int j=0;j<n;j++)
        {
            if(board[0][j]=='O')
            dfs(board,0,j,visited,m,n);
            if(board[m-1][j]=='O')
            dfs(board,m-1,j,visited,m,n);
        }
        for(int i=1;i<m-1;i++)
            for(int j=1;j<n-1;j++)
            {
                if(!visited[i][j]&&board[i][j]=='O')
                    board[i][j]='X';
            }
    }
};
void solve()
    {

        
    }
int32_t main()
{
cin.tie(0)->sync_with_stdio(0);
solve();
return 0;
}
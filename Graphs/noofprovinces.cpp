#include <bits/stdc++.h>
using namespace std;
class Solution 
{

 private:
     void dfs(vector<vector<int>>&isConnected,vector<int>&vis,int i)
     {
         vis[i]=1;
         int n=isConnected.size();
         for(int j=0;j<n;j++)
          {
             if(isConnected[i][j]==1 && vis[j]!=1)
             {
                 dfs(isConnected,vis,j);
             }
          }
     }
      
 public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        //isconnected is adjacency matrix
        int n=isConnected.size();
        if(n==0) return 0;
        vector<int>vis(n,0);
        int ct=0;
        for(int i=0;i<n;i++){
            if(vis[i]!=1){ 
                dfs(isConnected,vis,i);
                ct++;
            }
        }
        return ct;
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
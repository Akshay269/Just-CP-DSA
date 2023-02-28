#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>>diff(n,vector<int>(m,1e9));
        diff[0][0]=0;
        pq.push({0,{0,0}});
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,1,0,-1};
        while(!pq.empty()){
            auto it =pq.top();
            pq.pop();
            int dif=it.first;
            int r=it.second.first;
            int c=it.second.second;


            if(r==n-1 && c==m-1) return dif;

            for(int i=0;i<4;i++){
              int newr=r+delrow[i];
              int newc=c+delcol[i];
              if(newr>=0 && newr<n && newc>=0&& newc<m){
                  int effort=max(abs(heights[newr][newc]-heights[r][c]),dif);
                  if(effort<diff[newr][newc]){
                      diff[newr][newc]=effort;
                      pq.push({effort,{newr,newc}});
                  }
              }
            }
        }
        return 0;
    }
};
int32_t main()
{
cin.tie(0)->sync_with_stdio(0);
   

return 0;
}
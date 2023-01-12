#include <bits/stdc++.h>
using namespace std;

int dpfunc(int day, int last, vector<vector<int>>&points,vector<vector<int>>&dp)
{
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> points[i][j];
            }
        }
        vector<vector<int>>dp(n,vector<int>(4,0));

        dp[0][0]=max(points[0][1],points[0][2]);
        dp[0][1]=max(points[0][0],points[0][2]);
        dp[0][2]=max(points[0][0],points[0][1]);
        dp[0][3]=max(points[0][1],max(points[0][1],points[0][2]));
        
        for(int day=1;)



       
    }

    return 0;
}
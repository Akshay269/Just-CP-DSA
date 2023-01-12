// ninja traininig
#include <bits/stdc++.h>
using namespace std;

int dpfunc(int day, int last, vector<vector<int>>&points,vector<vector<int>>&dp)
{
    // base case
    if (day == 0)
    {
        int maxi = 0;
        for (int task = 0; task < 3; task++)
            if (task != last)
              maxi = max(maxi, points[0][task]);
            
        return maxi;
    }

    if(dp[day][last]!=-1) return dp[day][last]; 

    // each day cases
    int maxi = 0;
    for (int task = 0; task < 3; task++)
    {
        if (task != last)
        {
            int point = points[day][task] + dpfunc(day - 1, task, points,dp);
            maxi = max(maxi, point);
        }
    }
    return dp[day][last]=maxi;
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
        vector<vector<int>>dp(n,vector<int>(4,-1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> points[i][j];
            }
        }
        dpfunc(n - 1, 3, points,dp);
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
// recursive
// int f(int ind, vector<int> wt, vector<int> val, int maxw)
// {
//     // base cases
//     if (ind == 0)
//     {
//         if (wt[0] <= maxw)
//             return val[0];
//         return 0;
//     }
//     // nonpick case
//     int nonpick = 0 + f(ind - 1, wt, val, maxw);
//     // pick case
//     int pick = INT_MIN;
//     if (wt[ind] <= maxw)
//         pick = val[ind] + f(ind - 1, wt, val, maxw - wt[ind]);
//     return max(pick, nonpick);
// }

// memoized case
// int f(int ind, vector<int> wt, vector<int> val, int maxw,vector<vector<int>>dp)
// {
//     // base cases
//     if (ind == 0)
//     {
//         if (wt[0] <= maxw)
//             return val[0];
//         return 0;
//     }
//     if (dp[ind][maxw] != -1)
//         return dp[ind][maxw];
//     // nonpick case
//     int nonpick = 0 + f(ind - 1, wt, val, maxw,dp);
//     // pick case
//     int pick = INT_MIN;
//     if (wt[ind] <= maxw)
//         pick = val[ind] + f(ind - 1, wt, val, maxw - wt[ind],dp);
//     return dp[ind][maxw] = max(pick, nonpick);
// }

int main()
{
    int n, maxw;
    cin >> n >> maxw;
    vector<int> wt, val;
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    for (int i = 0; i < n; i++)
        cin >> val[i];

    vector<vector<int>> dp(n, vector<int>(maxw + 1, 0));
    for (int i = wt[0]; i <= maxw; i++)
        dp[0][maxw] = val[0];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= maxw; j++)
        {
            int nottake = dp[i - 1][j];
            int take = INT_MIN;
            if (wt[i] <= maxw)
                take = val[i] + dp[i - 1][maxw - wt[i]];
            dp[i][j] = max(take, nottake);
        }
    }
    cout << dp[n - 1][maxw];
    return 0;
}
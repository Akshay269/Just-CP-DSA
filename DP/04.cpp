#include <bits/stdc++.h>
using namespace std;
// #define int long long
// recursion/// memoiaztion
// int f(int index, vector<int> h, vector<int> &dp)
// {
//     if (i == 0)
//         return 0;
//     if (dp[i] != -1)
//         return dp[i];
//     int l = INT_MAX;
//     int r = INT_MAX;
//     l = f(i - 1, h, dp) + abs(h[i - 1] - h[i]);
//     if (i > 1)
//         r = f(i - 2, h, dp) + abs(h[i - 2] - h[i]);
//     return dp[i] = min(l, r);
// }

// tabulation

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> h;
        for (int i = 0; i < n; i++)
            cin >> h[i];

        vector<int> dp(n, 0);

        dp[0] = 0;
        
        for (int i = 1; i < n; i++)
        {
            int j1 = dp[i - 1] + abs(h[i - 1] - h[i]);
            int j2 = INT_MAX;
            if (i > 1)
                j2 = dp[i - 2] + abs(h[i - 2] - h[i]);

            dp[i] = min(j1, j2);
        }
        cout << dp[n - 1];
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int j = 0; j <= m; j++)
        dp[0][j] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string ans;
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        // If current character in both the strings are same, then current character is part of LCS
        if (s1[i - 1] == s2[j - 1])
        {
            ans.push_back(s1[i - 1]);
            i--;
            j--;
        }
        // If current character in X and Y are different & we are moving upwards
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            i--;
        }
        // If current character in X and Y are different & we are moving leftwards
        else
        {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
// #define int long long
// memoiaztion/recursion
//  int f(int index)
//  {
//      if (index == 0)
//          return 1;
//      if (index == 1)
//          return 1;
//      return f(index - 1) + f(index - 2);
//  }

// tabulation

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        const int mod = 1000000007;
        long long int n;
        cin >> n;
        //tabulation
        vector<int> dp(n + 1, -1);

        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++)
            dp[i] = (dp[i - 1] + dp[i - 2])%mod;

        cout << dp[n]<< endl;
       

        // cout << f(n) << endl;


        //space optimization
        // long long int prev2=1;
        // long long int prev=1;
        // for(int i=2;i<=n; i++){
        //     int curi=prev2+prev;
        //     prev2=prev;
        //     prev=curi;
        // }
        // cout<<prev<<endl;
    }
    return 0;
}
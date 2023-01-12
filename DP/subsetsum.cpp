#include <bits/stdc++.h>
using namespace std;
bool f(int ind, vector<int>&arr, int sum,vector<vector<int>>&dp)
{
    if(sum==0) return true;
    if(ind==0) return (arr[ind]==sum);
    if(dp[ind][sum]!=false) return dp[ind][sum];
    int take=false;
    if(sum>=arr[ind]) take = f(ind-1,arr,sum-arr[ind],dp);
    int nottake=f(ind-1,arr,sum,dp);
    return dp[ind][sum]=take || nottake;
}
bool subsetSumToK(int n, int sum, vector<int> arr)
{
     
    for (int i = 0; i < n; i++)
        dp[i][0] = true;
    dp[0][arr[0]] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= sum; j++)
        {
            bool nottake = dp[i - 1][j];
            bool take = false;
            if (arr[i] <= j)
                take = dp[i - 1][j - arr[i]];
            dp[i][j] = take | nottake;
        }
    }
    int mini=1e9;
    int s1=0,s2=0;
    int totsum=*accumulate(arr.begin(), arr.end(),0);
    for(int i=0;i<n;i++){
        if(dp[n-1][i] == true) {
            s1=i;
            s2=totsum-i;
            mini=min(mini,abs(s2-s1));
        }
    }
    return mini;
}

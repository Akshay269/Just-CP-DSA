#include <bits/stdc++.h>
using namespace std;
// max subsequence sum without adjacent elements
//recursive solution
int f(int ind, vector<int> &nums)
{
    if (ind == 0)
        return nums[ind];
    if (ind < 0)
        return 0;

    int pick = nums[ind] + f(ind - 2, nums);
    int non_pick = 0 + f(ind - 1, nums);

    return max(pick, non_pick);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        cout << f(n - 1, nums) << "\n";
    }

    return 0;
}
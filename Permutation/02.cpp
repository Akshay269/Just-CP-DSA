#include <bits/stdc++.h>
using namespace std;

void recurpermute(int ind, vector<int> &nums, vector<vector<int>> &ans)
{
    if (ind == nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = ind; i < nums.size(); i++)
    {
        swap(nums[ind], nums[i]);
        recurpermute(ind + 1, nums, ans);
        swap(nums[ind], nums[i]);
    }
}

int main()
{
    vector<vector<int>> ans;
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    recurpermute(0, nums, ans);
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void recurpermute(vector<int> ds, vector<int> nums, vector<vector<int>> &ans, int freq[])
{
    if (ds.size() == nums.size())
    {
        ans.push_back(ds);
        return;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (!freq[i])//if that is unmarked 
        {
            ds.push_back(nums[i]);
            freq[i] = 1;//marked
            recurpermute(ds, nums, ans, freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[n];
    for (int i = 0; i < n; i++)
        freq[i] = 0;
    recurpermute(ds, nums, ans, freq);
    for (int i = 0; i < n; i++)
        cout<< ans[i];

    return 0;
}

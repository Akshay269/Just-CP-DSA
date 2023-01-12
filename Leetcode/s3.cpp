#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getno(int nums)
    {
        int n = 0;
        while (nums)
        {
            n += (nums % 10);
            nums /= 10;
        }
        return n;
    }

    int maxisum(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int temp = getno(nums[i]);
            mp[temp].push_back(nums[i]);
        }
        int maxi = -1;
        for (auto it : mp)
        {
            if (it.second.size() <= 1)
                continue;
            vector<int> temp = it.second;
            maxi = max(maxi, temp[0] + temp[1]);
        }
        return maxi;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    
    return 0;
}
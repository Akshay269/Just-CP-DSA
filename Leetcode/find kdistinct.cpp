// You are given a 0-indexed integer array nums and two integers key and k. A k-distant index is an index i of nums for which there exists at least one index j such that |i - j| <= k and nums[j] == key.
// Return a list of all k-distant indices sorted in increasing order.
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int k, key;
    cin >> k >> key;
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((abs(i - j) <= k) && (v[j] == key))
            {
                ans.push_back(i);
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << ans[i];

    return 0;
}
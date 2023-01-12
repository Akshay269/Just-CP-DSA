// Find the Difference of Two Arrays
// Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

// answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
// answer[1] is a list of all distinct integers in nums2 which are not present in nums1.

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unorderd_set<int> s2(nums2.begin(), nums2.end());
        vector<vector<int>> ans(2);
        for (auto &it : s1)
            if (s2.count(it) == 0)
                ans[0].push_back(it);
        for (auto &it : s2) // s2 aaega bcoz in set repetion nhi hota h, toh searching 1 baar hogi aur print bi ek hi baar hoga , so nums2 ki jgah s2 kiya h similarlty upar s1 kiya h
            if (s1.count(it) == 0)
                ans[1].push_back(it);
        return ans;
    }
};
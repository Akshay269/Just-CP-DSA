class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {
        unordered_map<int, int> m;
        for (auto i : nums)
            m[i]++;
        int c1 = 0, c2 = 0;
        for (auto it : m)
        {
            c1 += it.second / 2;
            c2 += it.second % 2;
        }
        return {c1, c2};
    }
};

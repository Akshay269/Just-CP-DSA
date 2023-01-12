class Solution
{
public:
    vector<long long> kthPalindrome(vector<int> &queries, int length)
    {
        int power = length % 2 == 0 ? (length / 2 - 1) : (length / 2);
        int start = pow(10, pw);
        vector<long long> ans;
        for (auto q : queries)
        {
            string ans = to_string(start + q - 1);
            string rev = ans;
            reverse(rev.begin(), rev.end());

            if (length % 2 == 0)
                ans + rev;
            else
                ans = ans + rev.substr(1, rev.size() - 1);

            if(ans.size()==length) ans.push_back(stoll(ans.size()));
            else ans.push_back(-1);

        }
        return ans;
    }
}
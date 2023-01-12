#include <bits/stdc++.h>
using namespace std;

bool f(string s1, string s2)
{
    int n = s1.size();
    int k = s2.size();

    map<char, int> mp;
    for (char c : s1)
    {
        mp[c]++;
    }
    for (int i = 0; i < k; i++)
    {
        mp[s2[i]]--;
    }
    for (auto it : mp)
        if (it.second != 0)
            return false;

    return true;
}
int cnt(string s1, string s2)
{
    int n = s1.size();
    int k = s2.size();
    int cnt = 0;
    for (int i = 0; i < (n - k + 1); i++)
    {
        if ( f(s1.substr(i, k), s2))
            cnt++;
    }
    return cnt;
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size(); //k<n
    int k = s2.size();
    cout << cnt(s1, s2) << "\n";
    return 0;
}
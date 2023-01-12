#include <bits/stdc++.h>
using namespace std;

template <typename T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &it : v)
        in >> it;
    return in;
}
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto &it : v)
        os << it << " ";
    return os;
}
template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &p)
{
    cin >> p.first >> p.second;
    return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p)
{
    cout << p.first << " " << p.second;
    return os;
}
template <typename T1, typename T2>
void minn(T1 &a, T2 b) { a = min(a, b); }

#define int long long
#define double long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define deb(x) cout << #x << "=" << x << endl;

const int mod = 1e9 + 7;
const int mod2 = 998244353;
const double PI = 3.1415926535897932384626433832795;

void solve()
{

    string s;
    cin >> s;
    int n = s.size();
    map<char, vector<int>> m;
    for (int i = 0; i < n; i++)
        m[s[i]].push_back(i + 1);
    if (s[0] < s[n - 1])
    {
        int jump = 0;
        int cst = abs(s[0] - s[n - 1]);
        vector<int> path;
        for (int i = 0; s[0] + i <= s[n - 1]; i++)
        {
            char c = s[0] + i;
            if (m.find(c) != m.end())
            {
                for (auto it : m[c])
                    path.push_back(it);
            }
        }
        cout << cst << " " << path.size() << endl;
        for (auto it : path)
            cout << it << " ";
        cout << endl;
    }
    else if (s[0] > s[n - 1])
    {
        int jump = 0;
        int cst = abs(s[0] - s[n - 1]);
        vector<int> path;
        for (int i = 0; s[0] + i >= s[n - 1]; i--)
        {
            char c = s[0] + i;
            if (m.find(c) != m.end())
            {
                for (auto it : m[c])
                    path.push_back(it);
            }
        }
        cout << cst << " " << path.size() << endl;
        for (auto it : path)
            cout << it << " ";
        cout << endl;
    }
    else 
    {
        cout << 0 << " " << m[s[0]].size() << endl;
        for (auto it : m[s[0]])
            cout << it << " ";
        cout << endl;
    }
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}
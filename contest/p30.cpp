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
    int n, k;
    int m;
    string s, res = "";
    cin >> n >> m >> s;

    map<char, int> mp;

    for (auto it : s)
        mp[it]++;
    int cnt[26];
    for (int i = 0; i < 26; i++)
        cnt[i] = 0;
    for (auto x : mp)
    {
        cnt[x.first - 'a'] = x.second;
    }
    k = m;//counter
    while (k--)
    {
        int flag = 1;
        int j = 0;
        int mx = min(n / m, 26);
        for (int i = 0; i < mx; i++, j++)
        {
            if (cnt[i] == 0)
            {
                flag = 0;
                break;
            }
            cnt[i]--;
        }
    (flag) ? res.push_back('a' + n / m) : res.push_back('a' + j);
    }
    cout << res << endl;
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
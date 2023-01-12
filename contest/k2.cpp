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

#define int long long int
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
    int m, s;
    cin >> m >> s;
    vector<int> v(m);
    cin >> v;
    unordered_map<int, int> ump;
    int maxo = 0;
    for (auto it : v)
    {
        ump[it] = true;
        maxo = max(maxo, it);
    }
    int p = 1;
    while (s > 0)
    {
        while (ump[p])
        {
            p++;
        }
        s = s - p;
        maxo = max(maxo, p);
        ump[p] = true;
        p = p + 1;
    }
    if (s == 0 && ump.size() == maxo)
    {
        cout << "YES\n";
    }
    else
        cout << "NO\n";
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
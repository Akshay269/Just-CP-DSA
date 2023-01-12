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

    int n, k, r, c;
    cin >> n >> k >> r >> c;
    r--;
    c--;
    vector<vector<char>> v(n, vector<char>(n, '.'));
    v[r][c] = 'X';
    int x = r, y = c;
    while (x >= 0)
    {
        for (int i = y; i < n; i += k)
            v[x][i] = 'X';
        for (int i = y; i >= 0; i -= k)
            v[x][i] = 'X';

        x -= 1;
        y += 1;
        if (y >= n)
            y = 0;
    }
    x = r;
    y = c;
    while (x < n)
    {
        for (int i = y; i < n; i += k)
            v[x][i] = 'X';
        for (int i = y; i >= 0; i -= k)
            v[x][i] = 'X';

        x += 1;
        y -= 1;
        if (y < 0)
            y = n - 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j];
        }
        cout << "\n";
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
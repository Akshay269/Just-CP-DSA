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

int dfsfunc(int r, int c, int n, vector<vector<int>> &v)
{
    v[r][c] = 0;
    int ct = 0;
    if (r > 2 || c > n)
        return 0;

    if (v[r + 1][c] == 1 && v[r][c + 1] == 0)
        dfsfunc(r + 1, c, n, v);

    if (v[r + 1][c] == 0 && v[r][c + 1] == 1)
        dfsfunc(r, c + 1, n, v);
        
    if (v[r + 1][c] == 1 && v[r][c + 1] == 1)
        ct++;

    return ct;
}

void solve()
{

    int n;
    cin >> n;
    int count = 0;
    vector<vector<int>> v(2, vector<int>(n));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 1)
            {
                count = dfsfunc(i, j, n, v);
            }
        }
    }
    cout << count << "\n";
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
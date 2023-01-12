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
    // input
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    // good grid ->the way grid should be
    vector<vector<int>> good_grid(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            good_grid[i][j] = grid[i][j];
        }
        sort(good_grid[i].begin(), good_grid[i].end());
    }

    // a set to store indices of colum that need to be swaped
    set<int> colum_swaped;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != good_grid[i][j])
            {
                colum_swaped.insert(j);
            }
        }
    }
    if (colum_swaped.size() == 0)
        cout << 1 << " " << 1 << "\n";
    else if (colum_swaped.size() > 2)
        cout << -1 << "\n";
    else
    {
        vector<int> col(colum_swaped.begin(), colum_swaped.end());
        for (int i = 0; i < n; i++)
        {

            swap(grid[i][col[0]], grid[i][col[1]]);
        }
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] != good_grid[i][j])
                    possible = false;
            }
        }
        if (possible)
            cout << col[0] + 1 << " " << col[1] + 1 << "\n";
        else
            cout << -1 << "\n";
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
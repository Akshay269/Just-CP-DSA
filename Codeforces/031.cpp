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

int reductiononly(int x)
{
    int op = 1;
    while (x % 4 == 0)
    {
        x /= 2;
        op++;
    }
    return op;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int odd = 0, ans = 0;
    vector<int> even;
    for (int i = 0; i < n; i++)
    {
        if (v[i] & 1)
            odd++;
        else
        {
            if (v[i] % 2 == 0 && v[i] % 4 != 0)
            {
                ans++;
                odd++;
            }
            else
                even.push_back(v[i]);
        }
    }
    if (odd > 0)
    {
        cout << ans + even.size() << "\n";
        return;
    }
    int mine = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int y = reductiononly(v[i]);
        mine = min(mine, y);
    }
    cout << mine + even.size() - 1 << "\n";
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
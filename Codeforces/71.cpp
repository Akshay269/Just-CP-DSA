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

    int n, x;
    cin >> n >> x;
    if (n == x)
    {
        cout << x << " ";
        for (int i = 2; i <= n - 1; i++)
        {
            cout << i << " ";
        }
        cout << 1 << "\n";
    }
    else if ((n%2==0) && ((n / 2) == x))
    {
        cout << x << " ";
        for (int i = 2; i < x; i++)
        {
            cout << i << " ";
        }
        cout << 2 * x << " ";
        for (int i = x + 1; i <= n - 1; i++)
        {
            cout << i << " ";
        }
        cout << 1 << "\n";
    }
    else
        cout << -1 << "\n";
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
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
    long long n, m;
    cin >> n >> m;
    long long ct2 = 0ll, ct5 = 0ll, y = n;

    while (n % 2 == 0)
    {
        ct2++;
        n = n / 2;
    }
    while (n % 5 == 0)
    {
        ct5++;
        n = n / 5;
    }
    long long  k = 1;
    if (ct2 > ct5)
    {
        for (long long i = 1; (i <= ct2 - ct5) && (k * 5 <= m); i++)
        {
            k *= 5;
        }
    }
    else
    {
        for (long long  i = 1; (i <= ct5 - ct2) && (k * 2 <= m); i++)
        {
            k *= 2;
        }
    }
    while (k * 10 <= m)
    {
        k *= 10;
    }
    cout << (m / k) * k * y << "\n";
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
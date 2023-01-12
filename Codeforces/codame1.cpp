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

    // int x, y;
    // cin >> x >> y;

    // int ct = 0;

    // if (x == y)
    //     ct = 0;
    // else
    // {
    //     int diff = abs(x - y);
    //     if (diff % 10==0)
    //         ct = diff / 10;
    //     else
    //         ct = (diff / 10) + 1;
    // }

    // cout << ct << "\n";

    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    int lop = (sum / n);
    int ct = 0;
    int diff = 0;
    ;

    for (int i = 0; i < n; i++)
    {

        diff += (abs(v[i] - lop));
        if (diff <= n)
            ct = 0;
        else
            ct = diff / 2;
    }

    cout << ct << "\n";
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    solve();

    return 0;
}
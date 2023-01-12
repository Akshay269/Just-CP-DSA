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

    int n;
    cin >> n;
    vector<int> v(n), even, odd;
    cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            even.push_back(i + 1);
        else
            odd.push_back(i + 1);
    }
    cout << n - 1 << "\n";
    int e = even.size();
    int o = odd.size();
    if (v[0] % 2 == 0) // if even
    {
        for (int i = e - 2; i >= 0; i--)
            cout << even[i] << " " << even[i + 1] << "\n";
        for (int i = 0; i < o; i++)
            cout << 1 << " " << odd[i] << "\n";
    }
    else
    {
        for (int i = o - 2; i >= 0; i--)
            cout << odd[i] << " " << odd[i + 1] << "\n";
        for (int i = 0; i < e; i++)
            cout << 1 << " " << even[i] << "\n";
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
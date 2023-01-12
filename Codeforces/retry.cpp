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
    vector<int> v(n);
    cin >> v;
    vector<int> b(n);
    cin >> b;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            v1.push_back(b[i]);
        else
            v2.push_back(b[i]);
    }
    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end(), greater<int>());

    int ans = 0;
    if (v1.size() == 0)
    {
        ans = accumulate(v2.begin(), v2.end(), (int)0);
        cout << ans << "\n";
        return;
    }
    if (v2.size() == 0)
    {
        ans = accumulate(v1.begin(), v1.end(), (int)0);
        cout << ans << "\n";
        return;
    }
    if (v1.size() == v2.size())
    {
        sort(b.begin(), b.end());
        cout << b[0] + 2 * (accumulate(b.begin() + 1, b.end(), (int)0)) << "\n";
    }
    else if (v1.size() < v2.size())
    {
        int k = v1.size();
        int sum1 = 2 * (accumulate(v1.begin(), v1.end(), (int)0));
        // deb(sum1);
        int sum2 = 2 * (accumulate(v2.begin(), v2.begin() + k, (int)0));
        // deb(sum2);
        int sum3 = accumulate(v2.begin() + k, v2.end(), (int)0);
        // deb(sum3);
        cout << sum1 + sum2 + sum3 << "\n";
    }
    else
    {
        int k = v2.size();
        int sum1 = 2 * (accumulate(v2.begin(), v2.end(), (int)0));
        // deb(sum1);
        int sum2 = 2 * (accumulate(v1.begin(), v1.begin() + k, (int)0));
        // deb(sum2);
        int sum3 = accumulate(v1.begin() + k, v1.end(), (int)0);
        // deb(sum3);
        cout << sum1 + sum2 + sum3 << "\n";
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
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

    // int n;
    // cin >> n;
    // if (n % 3 == 0)
    // {
    //     cout << n / 3 << " " << n / 3 + 1 << " " << n / 3 - 1 << "\n";
    // }
    // else if (n % 3 == 1)
    // {
    //     if (n % 2 == 0)
    //         cout << n / 3 + 1 << " " << n / 3 + 2 << " " << n / 3 - 2 << "\n";
    //     else
    //         cout << n / 3 << " " << n / 3 + 2 << " " << n / 3 - 1 << "\n";
    // }
    // else
    // {
    //     cout << n / 3 + 1 << " " << n / 3 + 2 << " " << n / 3 - 1 << "\n";
    // }

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int diff = 1e18;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != 0)
        {
            if (diff == 1e18)
                diff = a[i] - b[i];
            else if (diff != a[i] - b[i])
            {
                cout << "NO"
                     << "\n";
                return;
            }
        }
        else
        {
            mx = max(mx, a[i]);
        }
    }
    if (diff == 1e18 || diff >= mx)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";
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
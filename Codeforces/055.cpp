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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // if (k == 1 && k != n)
    // {
    //     // return max element
    //     cout << *max_element(v.begin(), v.end()) << endl;
    // }
    // if (n == k)
    // {
    //     // return all sum
    //     int sum = 0;
    //     for (int i = 0; i < n; i++)
    //         sum += v[i];
    //     cout << sum << endl;
    //     return;
    // }
    // int a = max_element(v.begin(), v.end()) - v.begin();
    // while (a <= n - k - 1)
    // {
    //     int b = a + k;
    //     if (b > n - 1)
    //         break;
    //     if (v[a] >= v[b])
    //         swap(v[a], v[b]);
    //     a++;
    // }
    // int sum = 0;
    // for (int i = n - k; i < n; i++)
    // {
    //     sum += v[i];
    // }
    // cout << sum << endl;
    for (int i = 0; i < k; i++)
    {
        for (int j = i; j < n; j += k)
        {
            if (v[j] > v[i])
                swap(v[j], v[i]);
        }
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
        ans += v[i];
    cout << ans << endl;
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
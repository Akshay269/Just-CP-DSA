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
// #define double long double
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
    int t0 = 0, t1 = 0;
    int maxo = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            t0++;
            maxo += t1; // count of ones before 0
        }
        else
            t1++;
    }

    int ct1 = 0, maxo1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            t0--;                                // har 0 ko change krne k liye usko mius krna hoga t0 me se
            maxo1 = max(maxo - ct1 + t0, maxo1); // phir max nikalna hoga
        }
        else
            ct1++;
    }

    int ct0 = 0, maxo2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] == 1)
        {
            t1--;
            maxo2 = max(maxo2, maxo - ct0 + t1);
        }
        else
            ct0++;
    }
    int ans = max(maxo, max(maxo1, maxo2));
    cout << ans << "\n";
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
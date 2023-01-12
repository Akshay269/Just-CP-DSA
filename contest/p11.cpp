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

int countDigit(long long n)
{
    return floor(log10(n) + 1);
}

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a(n), b(n);
    map<int, int> mpa, mpb;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mpa[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        mpb[b[i]]++;
    }
    for (auto it : mpa)
    {
        int num = it.first;
        int minn = min(mpa[num], mpb[num]);
        mpa[num] -= minn;
        mpb[num] -= minn;
    }

    for (auto it : mpa)
    {
        int num = it.first;
        if (num > 9)
        {
            int new_num = log10(num) + 1;
            ans += mpa[num];
            mpa[new_num] += mpa[num];
            mpa[num] = 0;
        }
    }
    for (auto it : mpb)
    {
        int num = it.first;
        if (num > 9)
        {
            int new_num = log10(num) + 1;
            ans += mpb[num];
            mpb[new_num] += mpb[num];
            mpb[num] = 0;
        }
    }
    for (auto it : mpa)
    {
        int num = it.first;
        int minn = min(mpa[num], mpb[num]);
        mpa[num] -= minn;
        mpb[num] -= minn;
    }
    for (auto it : mpa)
        if (it.first != 1)
            ans += it.second;

    for (auto it : mpb)
        if (it.first != 1)
            ans += it.second;

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
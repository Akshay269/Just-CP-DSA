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
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2)
            odd++;
        else
            even++;
    }
    // if (even == n)
    // {
    //     cout << "Alice\n";
    // }
    // if (odd == n)
    // {
    //     if (n % 2 == 0)
    //     {
    //         cout << "Alice\n";
    //         return;
    //     }

    //     if (n % 2 != 0)
    //     {
    //         int i = 3;
    //         while (i <= n)
    //         {
    //             if (odd == i)
    //             {
    //                 cout << "Alice\n";
    //                 return;
    //             }
    //             i = i + 4;
    //         }
    //         int j = 5;
    //         while (j <= n)
    //         {
    //             if (odd == j)
    //             {
    //                 cout << "Bob\n";
    //                 return;
    //             }
    //             j = j + 4;
    //         }
    //     }
    // both even odd presenti
    int moves = 0;
    if (n % 2 == 0)
        moves = n / 2;
    else
        moves = (n / 2) + 1;
    int ct = moves;
    while (1)
    {
        if (ct < 0)
        {
            cout << "Bob\n";
            return;
        }
        int val1 = ct + ct - 1;
        int val2 = moves - ct + moves - ct;
        if (even >= val1 && odd >= val2)
        {
            cout << "Alice\n";
            return;
        }
        val1 = ct + ct;
        val2 = moves - ct + moves - ct - 1;
        if (even >= val1 && odd >= val2)
        {
            cout << "Alice\n";
            return;
        }
        ct -= 2;
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
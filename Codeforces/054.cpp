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

    int n, m;
    cin >> n >> m;
    if (m < n)
    {
        cout << "No\n";
        return;
    }
    else // m>n
    {
        if (n == 1)
        {
            cout << "Yes\n";
            cout << m << "\n";
            return;
        }
        else // n >1 and n<m
        {
            if (m % n == 0)
            {
                cout << "Yes\n";
                for (int i = 0; i < n; i++)
                    cout << m / n << " ";
                cout << endl;
            }
            else // m%n!=0
            {
                if (n % 2 != 0)
                {
                    cout << "Yes\n";
                    for (int i = 0; i < n - 1; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << m - n + 1 << endl;
                }
                else if ((n % 2 == 0) && (m % 2 == 0))
                {
                    cout << "Yes\n";
                    for (int i = 0; i < n - 2; i++)
                    {
                        cout << 1 << " ";
                    }
                    cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << endl;
                }
                else if ((n % 2 == 0) && (m % 2 != 0))
                {
                    cout << "No\n";
                    return;
                }
            }
        }
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
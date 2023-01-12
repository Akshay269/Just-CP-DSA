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
#define d long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define sz(v) (int)v.size()
#define deb(x) cout << #x << "=" << x << endl;

const int mod = 1e9 + 7;
const int mod2 = 998244353;
const double PI = 3.1415926535897932384626433832795;

pair<int, int> intersection(pair<d, d> &a, pair<d, d> &b)
{
    if (a.second < b.first || b.second < a.first)
        return {-1, -1};
    return {max(a.first, b.first), min(a.second, b.second)};
}
void solve()
{

    int n;
    cin >> n;
    vector<int> x(n), t(n);
   for(int i = 0; i < n; i++) cin>>x[i];
    for(int i = 0; i < n; i++) cin>>t[i];
    int l = 0, h = 2e8 + 5, ans = 0;
    int itrs = 30;
   
    while (itrs--)
    {
        int mid = (l + h) / 2;
         bool flag = 1;
        pair<d,d> full = {0, 1e8};

        for (int i = 0; i < n; i++)
        {
            if (t[i] > mid)
            {
                flag = 0;
                break;
            }
            int diff = mid - t[i];
            pair<d, d> range = {x[i] - diff, x[i] + diff};

            full = intersection(range, full);
            if (full.first == -1)// no intersection
            {
                flag = 0;
                break;
            }
        }
        if (flag = 1)
        {
            ans = (full.first + full.second) / 2;
            h = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout  <<setprecision(12)<<fixed<< ans << "\n";
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
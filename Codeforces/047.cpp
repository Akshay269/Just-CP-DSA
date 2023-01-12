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
bool checkperfectsquare(int n)
{

    // If ceil and floor are equal
    // the number is a perfect
    // square
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n)))
    {
        return true;
    }
    else
    {
        return false;
    }
}
// void solve()
// {

//     // int n, k;
//     // cin >> n >> k;
//     // vector<int> v(k);
//     // cin >> v;
//     // sort(v.begin(), v.end());
//     // int c = 0, ans = 0;
//     // for (int i = k - 1; i >= 0; i--)
//     // {
//     //     int e = v[i];
//     //     if (e <= c)
//     //         break;
//     //     int d = n - e;
//     //     c += d;
//     //     ans++;
//     // }
//     // cout << ans << "\n";

    
// }
int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "NO"
                 << "\n";
            continue;
        }
        int z = n / 2;
        if (checkperfectsquare(z))
        {
            cout << "YES\n";
            continue;
        }
        if (n % 4 != 0)
        {
            cout << "NO\n";
            continue;
        }

        z = n / 4;
        if (checkperfectsquare(z))
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO/n";

        return 0;
    }
}
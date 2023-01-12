#include <bits/stdc++.h>
#include <strings.h>
int ffs(int i);
#define _GNU_SOURCE
#include <string.h>
int ffsl(long int i);
int ffsll(long long int i);
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
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;

    return (ceil(log2(n)) == floor(log2(n)));
}
int PositionRightmostSetbit(int n)
{
      if(n == 0)
          return 0;
    // Position variable initialize with 1
    // m variable is used to check the set bit
    int position = 1;
    int m = 1;
 
    while (!(n & m)) {
 
        // left shift
        m = m << 1;
        position++;
    }
    return position;
}

void solve()
{

    int x;
    cin >> x;
    int y = 0;
    if(x==1) y=3;
    else if (x % 2 != 0 && x!=1) // odd
        y = 1;
    else
    {
        if (isPowerOfTwo(x))
        { // power of 2 h//
            y = x + 1;
        }
        else
        {
            int z = PositionRightmostSetbit(x);
            y = pow(2, z-1);
        }
    }

    cout << y << "\n";
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
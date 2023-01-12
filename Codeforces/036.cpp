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

    // int n;cin>>n;
    // if(n&1) cout<< -1 << "\n";
    // else {
    //      n/=2;
    //      int b,c;
    //      b=1;
    //      c=n^b;
    //      cout<<b<<" "<<b<<" "<<c<<endl;
    // }

    int n, m;
    cin >> n >> m;
    string s1 = "";
    for (int i = 0; i <= 50; i++)
    {
        if (i & 1)
            s1 += "00";
        else
            s1 += "11";
    }
    string temp1 = s1.substr(3, m);
    string temp2 = s1.substr(1, m);

    for (int i = 0; i < n / 2; i++)
    {
        if (i & 1)
        {
            for (auto x : temp2)
                cout << x << " ";
            cout << "\n";
            for (auto x : temp1)
                cout << x << " ";
            cout << "\n";
        }
        else
        {
            for (auto x : temp1)
                cout << x << " ";
            cout << "\n";
            for (auto x : temp2)
                cout << x << " ";
            cout << "\n";
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
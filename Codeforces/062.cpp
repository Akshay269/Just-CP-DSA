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
    vector<int> b(n);
    cin >> b;
    vector<int> c0, c1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            c0.push_back(b[i]);
        else if (v[i] == 1)
            c1.push_back(b[i]);
    }
    sort(c0.begin(), c0.end());
    sort(c1.begin(), c1.end());
    
    if(c0.size()==c1.size()){
        int sum1=0,sum2=0;
        for(int i=1;i<c0.size();i++) sum1+=c0[i];
        for(int i=0;i<c1.size();i++) sum2+=c1[i];
        cout<<c0[0]+2*(sum1+sum2);
        return;
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
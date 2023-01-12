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

    string s;
    cin >> s;
    int n = s.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = s[i] - 'a' + 1;
    }

    int a = v[0];
    int b = v[n - 1];

    for (auto i = 1; i < n - 1; i++)
    {
        if (v[i] > a && v[i] > b)
            v.erase(v.begin() + i);
    }
    
    if (a > b){
        sort(v.begin() + 1, v.end() - 1, greater<int>());
        int ans1=0;
        for(int i = 0;i<v.size();i++) ans1+=abs(v[i]-v[i+1]);
        cout<<ans1<<" "<<v.size()<<"\n";
    }

    // for(auto it:v) cout << it << " ";


    if (a < b){
        sort(v.begin() + 1, v.end() - 1);deb(v);
        int ans2=0;
        for(int i = 0;i<v.size();i++) ans2+=abs(v[i]-v[i+1]);
        cout<<ans2<<" "<<v.size()<<"\n";
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
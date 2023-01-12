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

int32_t main()
{

    cin.tie(0)->sync_with_stdio(0);
    // unordered_map<char, int> mp;
    // string s, t;
    // cin >> s >> t;

    // for (auto it : t)
    //     mp[it]++;

    // for (auto it : s)
    //     mp[it]--;

    // for (auto it : mp)
    // {
    //     if (it.second == 1)
    //         cout << it.first << "\n";
    // }

    string s,t;cin>>s>>t;
    int i=0;
    bool flag=0;
    for(;i<s.size();i++){
        if(s[i]!=t[i]){
            flag=1;
            break;
        }
        else continue;
    }
    if(flag) cout<<i+1<<"\n";
    else cout<<i+1<<"\n";
   

    return 0;
}
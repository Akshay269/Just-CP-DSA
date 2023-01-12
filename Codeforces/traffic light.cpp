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
    char c;
    cin >> c;
    string s;
    cin >> s;
    if(c=='g'){
        cout<<0<<"\n";
        return;
    }
    s+=s;
    vector<int> st;
    for (int i = 0; i < n; i++){
        if (s[i] == c)
            st.push_back(i);
    }

    int ans=0;
    for(auto it:st){
       
        for(int i=it; i < 2*n; i++){
            if(s[i]=='g'){
              ans=max(ans,i-it);
              break;
            }
        }
    }
    cout<<ans<<"\n";

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
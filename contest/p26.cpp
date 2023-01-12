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

   int n,k; cin>>n>>k;
    k--;
    vector<int> v(n); cin>>v;
    int health=v[k];
    int l=k-1,r=k+1;
    int lmin=0,rmin=0;
    int lcnt=0,rcnt=0;
    while(1)
    {
        while(l!=-1 && health+lmin>=0)
        {
            lcnt+=v[l--];
            lmin=min(lcnt,lmin);
            if(lcnt>=0) break; // slime has already been gathered for this iteration
        }
        while(r!=n && health+rmin>=0)
        {
            rcnt+=v[r++];
            rmin=min(rmin,rcnt);
            if(rcnt>=0) break; // slime has already been gathered for current iteration
        }
        //deb(lmin); deb(rmin);
        if(health+rmin>=0 && rcnt>=0)
        {
            health+=rcnt;
            rcnt=rmin=0;
        }
        if(health+lmin>=0 && lcnt>=0)
        {
            health+=lcnt;
            lcnt=lmin=0;
        }
 
        if(health+lmin<0 && health+rmin<0)
        {
            cout<<"NO\n";
            return;
        }
 
        if((health+lmin>=0 && l==-1) || (health+rmin>=0 && r==n))
        {
            cout<<"YES\n";
            return;
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
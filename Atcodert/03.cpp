#include <bits/stdc++.h>
using namespace std;

template <typename T> istream& operator >> (istream& in, vector<T>& v) { for (auto &it:v) in >> it; return in; }
template <typename T> ostream& operator << (ostream& os, const vector<T>& v) { for (auto &it:v) os << it << " "; return os; }
template <typename T1, typename T2> istream& operator >> (istream& in, pair<T1,T2>& p) { cin >> p.first >> p.second; return in; }
template <typename T1, typename T2> ostream& operator << (ostream& os, const pair<T1,T2>& p) { cout << p.first << " " << p.second; return os; }
template <typename T1, typename T2> void minn(T1& a, T2 b) { a = min(a,b); }

#define int long long 
#define double long double
#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(v) (int)v.size()
#define deb(x) cout<<#x<<"="<<x<<endl;

const int mod = 1e9 + 7;
const int mod2 = 998244353;
const double PI = 3.1415926535897932384626433832795;

void solve()
    {
        int n;cin>>n;
    //     string s;cin>>s;
    //   vector<pair<int,int>>vp;
    //   vp.push_back({0,0});
    //   int x=0,y=0;
    //   for(int i=0;i<n;i++){
    //     if(s[i]=='R') {
    //         x=x+1,y=y;
    //         vp.push_back({x,y});
    //         }
    //    if(s[i]=='L') {
    //         x=x-1,y=y;
    //         vp.push_back({x,y});
    //         }
    //     if(s[i]=='U') {
    //         x=x,y=y+1;
    //         vp.push_back({x,y});
    //         }
    //     if(s[i]=='D') {
    //         x=x,y=y-1;
    //         vp.push_back({x,y});
    //         }
    //   }
    
    //   int c1=vp.size();
    //   set<pair<int,int>>st;
    //   for(auto it:vp){
    //     st.insert(it);
    //   }
      
    //   int c2=st.size();

    //   if(c2<c1) cout<<"Yes\n";
    //   else cout<<"No\n";

    vector<pair<int,int>>vp;cin>>vp;
    set<pair<int,int>>st;
    for(auto it:vp) st.insert(it);
    if(st.size()==n)
    }
int32_t main()
{
cin.tie(0)->sync_with_stdio(0);


    solve();

return 0;
}
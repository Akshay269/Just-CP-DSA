#include "bits/stdc++.h"
using namespace std;

template <typename T> istream& operator >> (istream& in, vector<T>& v) { for (auto &it:v) in >> it; return in; }
template <typename T> ostream& operator << (ostream& os, const vector<T>& v) { for (auto &it:v) os << it << " "; return os; }
template <typename T1, typename T2> istream& operator >> (istream& in, pair<T1,T2>& p) { cin >> p.first >> p.second; return in; }
template <typename T1, typename T2> ostream& operator << (ostream& os, const pair<T1,T2>& p) { cout << p.first << " " << p.second; return os; }
template <typename T1, typename T2> void minn(T1& a, T2 b) { a = min(a,b); }
template <typename T1, typename T2> void maxx(T1& a, T2 b) { a = max(a,b); }

#define int long long int
#define double long double
#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(v) (int)v.size()
#define deb(x) cout<<#x<<"="<<x<<endl;
#define pii pair<int,int> 

const int mod = 1e9 + 7;
const int mod2 = 998244353;
const double PI = 3.1415926535897932384626433832795;
//FUCK RATINGS, i am here for learning and experience

void solve()
{
    int n,x; cin>>n>>x;
    vector<int> visited(n+1),ans(n);
    int curr=n;
    ans[n-1]=1; ans[0]=x;
    visited[1]=1;
    visited[x]=1;
    while(curr>=0 && visited[curr]) curr--;
    for(int i=n-2;i>0;i--)
    {
        int st=(curr/(i+1))*(i+1);
        while(st>0 && visited[st]) st-=(i+1);
        if(st<=0)
        {
            cout<<-1<<endl;
            return;
        }
        ans[i]=st;
        visited[st]=1;
        while(curr>0 && visited[curr]) curr--;
    }
    cout<<ans<<endl;
}

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}
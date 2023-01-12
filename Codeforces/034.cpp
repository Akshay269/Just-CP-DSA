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

        // int n,m;cin>>n>>m;
        // int ans= m*(m-1) + n*m*(n+1);
        // ans=ans/2;
        // cout<<ans<<"\n";
        int n,sum=0,e=0;cin>>n;
        vector<char>a(n);
        vector<int>b(n);
        vector<int>c(n+1,1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=(int)a[i]-48;
            if(i==0 && b[i]==9) e=1;
        }
        if(e==0){
             for(int i=0;i<n;i++)
                 cout<<9-b[i];
            cout<<"\n";
        }
        else{
             for(int i=n-1;i>0;i--){
                if(c[i]>=b[i]) c[i]=c[i]-b[i];
                else{
                    c[i]=c[i]-b[i]+10;
                    c[i-1]--;
                }
             }
             c[0]=c[0]-9;
             for(int i=0;i<n;i++){
                cout<<c[i];
             }
             cout<<"\n";
        }

    }
int32_t main()
{
cin.tie(0)->sync_with_stdio(0);
int tc=1;
cin>>tc;
while(tc--)
{
    solve();
}
return 0;
}
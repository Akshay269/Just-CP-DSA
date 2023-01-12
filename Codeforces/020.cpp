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

    //     int n;cin>>n;
    //     if(n&1 || n<=3){ cout<< -1 <<"\n";
    //     return ;}
    //     int min=0,max=0;
    //     if(n%6==0) min=n/6;
    //     else min=n/6 +1;
    //     max=n/4;
    //    cout<<min<<" "<<max<<"\n";

    //most similar words
    int n,m;cin>>n>>m;
    vector<string>v(n);
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    for(int i=0;i<n;i++){
        int temp_mini=INT_MAX;
        for(int j=i+1;j<n; j++){
            int sum=0;
            for(int k=0;k<sz(v[i]);k++){
                int temp1=max(v[i][k],v[j][k])-min(v[i][k],v[j][k]);
                sum+=temp1;
            }
            temp_mini=min(temp_mini,sum);
        }
        mini=min(mini,temp_mini);
    }
    cout<<mini<<"\n";
    return ;
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
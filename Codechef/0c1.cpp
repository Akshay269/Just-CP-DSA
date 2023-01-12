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
int orOfArray(vector<int> v, int n)
{

    int or_arr = v[0];
    for (int i = 0; i < n; i++)
    {
        or_arr = or_arr | v[i];
    }
    return or_arr;
}
int decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    return i;
}

void solve()
{

    int n, y;
    cin >> n >> y;
    vector<int> v(n);
    cin >> v;
    int orsum = orOfArray(v, n);
    int z1=__builtin_popcount(orsum);
    int z2=__builtin_popcount(y);

    if((z1>z2) || (z1==z2 && y!=orsum)) cout<< -1<<"\n";
    else{
        int ans=0;
        for(int i=0;i<=y;i++){
            if((orsum|i)==y){
                ans=i;
                break;
            }
        }
        cout<<ans<<"\n";
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
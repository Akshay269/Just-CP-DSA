#include <bits/stdc++.h>
using namespace std;

string categorizeBox(int l, int w, int h, int m)
{
    int v = l * w * h;
    if (((l >= 1e4 || w >= 1e4 || h >= 1e4) || (v >= 1e9)) && m >= 100)
        return "Both";
    if (!((l >= 1e4 || w >= 1e4 || h >= 1e4) || (v >= 1e9)) && m < 100)
        return "Neither";

    if (((l >= 1e4 || w >= 1e4 || h >= 1e4) || (v >= 1e9)))
        return "Bulky";
    if (m >= 100)
        return "Heavy";
}
int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int l, w, h, m;
    cin >> l >> w >> h >> m;
    cout<<categorizeBox(l, w, h, m);
    return 0;
}
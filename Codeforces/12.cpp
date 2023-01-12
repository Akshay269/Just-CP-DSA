#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, ans = 0;
        cin >> n >> m;

        if ((n == 1 && m > 2) || (n > 2 && m == 1))
            cout << -1 << "\n";
        else
        {
            ans = 2 * min(n, m) - 2;
            ans += 2 * (max(n, m) - min(n, m));
            if ((max(n, m) - min(n, m)) % 2)
                ans--;
            cout << ans << "\n";
        }
    }
    return 0;
}
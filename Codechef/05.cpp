#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << (2 - ((x == a or x == b) + (y == a or y == b))) << "\n";
    }

    return 0;
}
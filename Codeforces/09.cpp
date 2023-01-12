#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int a_new = 2 * b - c;
        if (a_new >= a && a_new != 0 && a_new % 1 == 0)
        {
            cout << "YES"
                 << "\n";
            return;
        }

        int b_new = (c + a) / 2;
        if (b_new >= b && b_new != 0 && b_new % 1 == 0)
        {
            cout << "YES"
                 << "\n";
            return;
        }

        int c_new = 2 * b - a;
        if (c_new >= c && c_new != 0 && c_new % 1 == 0)
        {
            cout << "YES"
                 << "\n";
            return;
        }

        cout << "NO"
             << "\n";
    }

    return 0;
}
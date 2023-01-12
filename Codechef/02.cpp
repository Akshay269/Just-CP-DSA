#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x % 5)
            cout << "-1"
                 << "\n";
        else
            cout << (x / 10) + (x % 10) / 5;
    }
    return 0;
}
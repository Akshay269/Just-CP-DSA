#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (((a = b + d) && (a == c)) || ((b = a + c) && (b == d)))
            cout << "Yes"
                 << "\n";
                 

        else
            cout << "No"
                 << "\n";
    }
    return 0;
}
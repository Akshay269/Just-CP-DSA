#include <bits/stdc++.h>
using namespace std;
void sortBinaryArray(int a[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++) {
 
        // if number is smaller than 1
        // then swap it with j-th number
        if (a[i] < 1) {
            j++;
            swap(a[i], a[j]);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int n, m, k;
        // cin >> n >> m >> k;
        // if (m <= n + k)
        //     cout << "YEs"
        //          << "\n";
        // else
        //     cout << "NO"
        //          << "\n";
        // int n, m;
        // cin >> n >> m;
        // if (m >= n)
        //     cout << n << "\n";
        // else
        //     cout << (n - m) + n << "\n";

        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        // string s1 = "01";
        // string s2 = "10";
        // int c1 = 0, c2 = 0;
        // if (s.find(s1) != s.end())
        //     c1++;
        // else if (s.find(s2) != s.end())
        //     c2++;

        // int fine = x * c1 + y * c2;
        // cout << fine << "\n";


    }

    return 0;
}
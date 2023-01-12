#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
            if (a[i] > b[i])
                swap(a[i], b[i]);

        int ans = 0;

        for (int i = 0; i < n-1; i++)
            ans += abs(a[i] - a[i+1]) + abs(b[i] - b[i+1]);

        cout<<ans<<"\n";
    }
    return 0;
}
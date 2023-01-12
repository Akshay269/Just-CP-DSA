#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;

    while (t--)
    {
        long long int n, b, x, y;
        cin >> n >> b >> x >> y;
        vector<int> v(n + 1);
        long long int sum = 0;
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            if ((v[i - 1] + x) <= b)
                v[i] = v[i - 1] + x;
            else
                v[i] = v[i - 1] - y;

            sum +=v[i];
            // sum=accumulate(v.begin()+1,v.end(),0);
        }

        cout << sum << "\n";
    }
    return 0;
}
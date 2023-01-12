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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> ans(n);
        ans[n - 1] = 1;
        int i = n - 2;
        while (i >= 0)
        {
            if ((v[i] > 0 && v[i + 1] < 0) || (v[i] < 0 && v[i + 1] > 0))
                ans[i] = 1 + ans[i + 1] ;
            else
                ans[i] = 1;

            i--;
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] <<" ";
        }
        cout<<"\n";
    }
    return 0;
}
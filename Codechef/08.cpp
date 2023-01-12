#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        if (k >= n)
            cout << *max_element(v.begin(), v.end()) << "\n";
        else
            cout << v[k + 1] << "\n";
    }
    return 0;
}
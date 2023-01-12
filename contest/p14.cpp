#include <bits/stdc++.h>
using namespace std;
int maxOccured(int L[], int R[], int n, int maxx)
{

    // Your code here
    map<int, int> mp;
    int maxf = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = L[i]; j <= R[i]; j++)
        {
            mp[j]++;
            maxf = max(maxf, mp[j]);
        }
    }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return mp[maxf];
}
int main()
{
    int n;
    cin >> n;
    int l[n], r[n];
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
        cin >> l[i];
    for (int i = 0; i < n; i++)
        cin >> r[i];

    cout << maxOccured(l, r, n, maxx);

    return 0;
}
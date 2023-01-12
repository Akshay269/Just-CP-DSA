#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int arr[6] = {1, 3, 5, 7, 7, 10};
    // int x = 7;
    // int lb = lower_bound(arr, arr + 6, x) - arr;
    // int ub = upper_bound(arr, arr + 6, x) - arr;
    // cout << ub-lb<<"\n";

    int n = 26;
    int l = 1, h = n;
    int ans = 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if ((mid * mid*mid) <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }
    cout<<ans<<"\n";

    return 0;
}
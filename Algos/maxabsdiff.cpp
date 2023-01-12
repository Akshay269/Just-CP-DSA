#include <bits/stdc++.h>
using namespace std;

int findmindiff(int arr[], int n)
{
    sort(arr, arr + n);
    int diff = INT_MAX; // set diff to max value

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (abs(arr[i] - arr[j]) < diff)
    //         {
    //             diff = abs(arr[i] - arr[j]);
    //         }
    //     }
    // }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] < diff)
            diff = arr[i + 1] - arr[i];
    }

    return diff;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findmindiff(arr, n);

    return 0;
}

// this is not a effecint solution

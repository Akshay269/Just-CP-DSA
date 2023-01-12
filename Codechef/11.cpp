#include <bits/stdc++.h>
using namespace std;

int kdn(int arr[], int n)
{
    int max_num = *max_element(arr, arr + n); //max element

    if (max_num < 0) //agar negative elements
    {
        return max_num;
    }
    int max_sum = 0;
    int max_end = 0;//jha subarrya end hora h
    for (int i = 0; i < n; i++)
    {
        max_end = max_end + arr[i];
        max_end = max(max_end, 0);
        max_sum = max(max_sum, max_end);
    }
    return max_sum;
}
int main()
{
   
    return 0;
}
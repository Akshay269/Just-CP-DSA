#include <bits/stdc++.h>
using namespace std;
void sortBinaryArray(int a[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {

        // if number is smaller than 1
        // then swap it with j-th number
        if (a[i] < 1)
        {
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

        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
    }
    return 0;
}
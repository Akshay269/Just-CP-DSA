#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, sum0 = 0, sum1 = 0, sum2 = 0;
    cin >> a;
    int A[3][3];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> A[i][j];
        }
        sum0 += A[i][0];
        sum1 += A[i][1];
        sum2 += A[i][2];
    }
    if (sum0 == 0 && sum1 == 0 && sum2 == 0)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}
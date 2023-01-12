#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];

  for (int i = 0; i < n - k + 1; i++)
  {
    bool flag = 0;
    for (int j = i; j <i+k; j++)
    {
      if (v[ j] < 0)
      {

        cout << v[ j] << " ";
        flag = 1;
        break;
      }
    }
    if (flag == 0)
      cout << 0 << " ";
  }

  return 0;
}
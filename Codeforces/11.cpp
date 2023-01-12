#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int t;
  cin >> t;
  while (t--)
  {
    long long int  n;
    cin >> n;
    long long int arr[n+1]={0}, dep[n+1]={0};
    long long int tmp[n+1];
    for (long long int i = 1; i <= n; i++)
    {
      cin >> arr[i] >> dep[i];
    }
    for (long long int i = 0; i < n; i++)
      cin >> tmp[i];

    long long int arrival = 0, prevdep = 0;
    for (int i = 1; i <= n; i++)
    {
      int travel = abs(arr[i] - dep[i - 1]);
      arrival = prevdep + travel + tmp[i-1];
      int wait=abs(arr[i]-dep[i]);
      wait=(double)ceil(wait/2.00);
      prevdep = arrival + wait;
      prevdep = max(prevdep, (long long)dep[i]);
    }
    cout<<(long long) arrival<<"\n";
  }
  return 0;
}
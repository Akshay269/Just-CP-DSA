#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long  n,x=0,mx=0,sum=0;
        cin >> n;
        long long  a[n];
        for (long long i = 0; i < n; i++){
            cin >> a[i];
            while(a[i]%2==0){
                x++;
                a[i]/=2;
            }
            mx=*max_element(a,a+n);
            sum+=a[i];
        }
        sum-=mx;
        cout<<sum+ mx*((long long )pow(2,x))<<"\n";
        
    }
    return 0;
}
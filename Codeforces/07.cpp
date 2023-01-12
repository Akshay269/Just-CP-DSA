#include <bits/stdc++.h>
using namespace std;
 

 
int main()
{
 
   int t;cin>>t;
   while (t--)
   {
       int a,b;cin>>a>>b;
       int max_e= max(a,b);
       int min_e= min(a,b);
       int ans=max((min_e) * 2,max_e);

       cout<<ans*ans<<"\n";

   }
   
   
    return 0;
} //accepted
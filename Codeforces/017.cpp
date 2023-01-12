#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  t;cin>>t;
  while(t--){
      long long n,k;cin>>n>>k;
      long long  ans=0,curr=1;
      while(curr<k){
          curr*=2;
          ans++;
      }
      if((curr<n)  && ((n-curr)%k!=0)) ans+= ((n-curr)/k)+1;
      else ans+=((n-curr)/k);

      cout<<ans<<"\n";
      }
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;cin>>t;
   while(t--){
      int n,r,b;cin>>n>>r>>b;
      string ans;
      int eqpa=r/(b+1);
      int uneqpa=r%(b+1);

      for(int i=0;i<(b+1-uneqpa);i++){
          string add(eqpa,'R');
          ans+=add;
          ans+='B';
      }
      for(int i=0;i<uneqpa;i++){
          string add(eqpa+1,'R');
          ans+=add;
          ans+='B';
      }
      ans.pop_back();
      cout<<ans<<"\n";

   }
return 0;
}
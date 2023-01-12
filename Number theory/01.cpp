#include<bits/stdc++.h>
using namespace std;

int getmissingnum(vector<int>v,int n){
    int x1=v[0];
    int x2=0;
    for(int i=1;i<n-1;i++) x1=x1^ v[i];
    for(int i=1;i<n;i++) x2=x2^ i;
    return x1^x2;
}
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  cout<<getmissingnum(v,n)<<"\n";
 
return 0;
}
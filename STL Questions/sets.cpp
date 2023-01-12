#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[]={2,5,2,1,5};
  set<int> st;
  int n;cin>>n;
  for(int i=0;i<n;i++){
      int x;cin>>x;
      st.insert(x); //log(n) n is size of set log(3)
  }
  //to erase st.erase(iterator)
  
  set<int>st={1,5,7,8};
  auto it=st.find(7); // it of 7
  auto it=st.find(9); // st.end dega
  
  
map<string,int> mpp;
mpp["raj"]=27;
mpp["hima"]=31;
mpp["sandeep"]=67;
mpp["tank"]=89;
//lexographically and numericallly sorted
mpp["raj"]=29;//overwrites 27

return 0;
}
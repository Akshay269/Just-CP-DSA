#include<bits/stdc++.h>
using namespace std;

long minstart(vector<int> arr)
{
    int st=0;
    int sum=0;
    for(auto it:arr)
    {
        sum+=it;
        if(sum<1)
        {
            int req=(1-sum);
            st+=req;
            sum=1;
        }
    }
    return st;
}

int main(){
    int n; cin>>n;
  vector<int> arr(n);
  for(auto &it:arr) cin>>it; 
  cout<<minstart(arr)<<endl;
return 0;
}
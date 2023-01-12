#include<bits/stdc++.h>
using namespace std;
int main(){

int del=0;int n=nums.size();
for(int i=0;i<n-1;i++){
    int shiftindex=i-del;
    if(nums[i]==nums[i+1] && shiftindex%2==0) del++;

}
if((n-del) % 2==1) del++;
cout<<del;
return 0;
}
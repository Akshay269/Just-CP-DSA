#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
bool ar[90000001];//initialized by false

void sieve(){
    int maxn=90000000;
    ar[0]=ar[1]=true;
    for(int i=2;i*i<=maxn;i++){
        if(!ar[i]){
            for(int j=i*i;j<=maxn;j+=i){
                ar[j]=true;
            }
        }
    }
    for(int i=2;i<=maxn;i++){
        if(!ar[i]) primes.push_back(i);
    }
      
}
int main(){
  int q,n;cin>>q;
  while(q--){
      cin>>n;
      cout<<primes[n-1]<<"\n";
  }
return 0;
}

#include<bits/stdc++.h>
using namespace std;

int isprime[10000001];
void solve(){
    int maxn=10000000;
    for(int i=1;i<=maxn;i++) isprime[i]=1;// filhal k liye saare prime 

    isprime[0]=isprime[1]=0;// not prime not composite

    for(int i=2;i*i<=maxn;i++){
        if(isprime[i]){
            for(int j=i*i;j<=maxn;j+=i) isprime[j]=0;
        }
    }

}





int main(){
   int n;cin>>n;
   vector<int>v(n,0);
   

return 0;
}
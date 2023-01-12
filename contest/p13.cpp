#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<vector<int>>pr(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>pr[i][0]>>pr[i][1];
    }
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;i++){
            vp[i].first=pr[i][0];
            vp[i].second=pr[i][1];
        }
        
        for(int i=0;i<n;i++){
            cout<<vp[i].first<<" "<<vp[i].second<<"\n";
        }

return 0;
}
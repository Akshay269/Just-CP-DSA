#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        // int n;cin>>n;
        // string s;cin>>s;
        // string ans;
        // for(auto it:s){
        //     if(it=='A') ans.push_back('T');
        //     if(it=='T') ans.push_back('A');
        //     if(it=='C') ans.push_back('G');
        //     if(it=='G') ans.push_back('C');
        // }
        // cout<<ans<<"\n";
        int p;
        cin >> p;
        int ans = (p / 100) + (p % 100);
        if (ans <= 10)
            cout << ans << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// void func(vector<int> v, int a, int b)
// {
//     if ((v[a] - v[b]) != 1)
//         return;
//     else
//         return func(v, a + 2, b + 2);
// }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // int a, b;
        // cin >> a >> b;
        // if (b == 0)
        //     cout << a + 1 << "\n";
        // else if (a == 0)
        //     cout << 1 << "\n";
        // else
        //     cout << (a * 1 + b * 2 + 1) << "\n";

        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());

        if((v[0]-v[1]>1)||((n==1) && (v[0]>1))) cout<<"NO"<<"\n";
        else{
            cout<<"YES"<<"\n";
        }

    }
    return 0;
}
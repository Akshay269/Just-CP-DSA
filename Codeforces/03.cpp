#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;//answer var
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                continue;
            else
            {

                if (i < n - 1 && s[i + 1] == '0')
                    ans += 2;
                else if (i < n - 2 && s[i + 1] == '1' && s[i + 2] == '0')
                    ans += 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, d, x; //saari calculation d me krni h
        cin >> w >> h;
        int n;
        int mx = INT_MIN;
        for (int i = 0; i < 4; i++)// 4 sides k liye
        {
            cin >> n;
            d = 0;
            for (int j = 0; j < n; j++) //n points k liye
            {
                cin >> x;
                if (j == 0)
                    d = x;
                else if (j == n - 1)
                    d = x - d;//max width
            }
            if (i < 2)// first two horizontal sides
                d *= h;
            else
                d *= w;
            mx = max(d, mx);
        }
        cout << mx << "\n";

        //     int k1, k2, k3, k4;
        //     int  ans = 0;

        //     int x1[k1 + 1], x2[k2 + 1], y1[k3 + 1], y2[k4 + 1];

        //     cin >> k1;
        //     for (int i = 1; i <= k1; i++)
        //     {
        //         cin >> x1[i];
        //     }

        //     cin >> k2;
        //     for (int i = 1; i <=k2; i++)
        //     {
        //         cin >> x2[i];
        //     }

        //     cin >> k3;
        //     for (int i = 1; i <= k3; i++)
        //     {
        //         cin >> y1[i];
        //     }

        //     cin >> k4;
        //     for (int i = 1; i <= k4; i++)
        //     {
        //         cin >> y2[i];
        //     }

        //     ans = (x1[k1] - x1[1]) * h;
        //     ans = max(ans, (x2[k2] - x2[1]) * h);
        //     ans = max(ans, max(y2[k4] - y2[1], y1[k3] - y1[1]) * w);
        //     cout << 2*ans << "\n";
        // }
    }

        return 0;
    }
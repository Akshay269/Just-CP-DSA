#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    deque<int> dq;

    for (int i = 0; i < k; i++)
    {
        if (v[i] < 0)
            dq.push_back(i);
    }

    for (int i = k; i < n; i++)
    {

        if (!dq.empty())
            cout << v[dq.front()] << " ";
        else
            cout << 0 << " ";

        while ((!dq.empty()) && (dq.front() < (i - k + 1)))
            dq.pop_front();

        if (v[i] < 0)
            dq.push_back(i);
    }
    if (!dq.empty())
        cout << v[dq.front()] << " ";
    else
        cout << 0 << " ";

    return 0;
}
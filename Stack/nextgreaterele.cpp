#include <bits/stdc++.h>
using namespace std;
int main()
{ // NGR
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> v(n,-1);
    stack<int> st;
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     if (s.size() == 0)
    //         v.push_back(-1);
    //     else if (s.size() > 0 && s.top() > arr[i])
    //         v.push_back(s.top());
    //     else if (s.size() > 0 && s.top() <= arr[i])
    //     {
    //         while (s.size() > 0 && s.top() <= arr[i])
    //             s.pop();
    //         if (s.size() == 0)
    //             v.push_back(-1);
    //         else
    //             v.push_back(s.top());
    //     }
    //     s.push(arr[i]);
    // }
    for (int i = n-1; i >=0 ; i--)
    {
        while (!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if (i < n)
        {
            if (!st.empty())
                v[i] = st.top();
            else
                v[i] = -1;
        }
        st.push(arr[i]);
    }
    for (int i = 0; i < n ; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
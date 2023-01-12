#include <bits/stdc++.h>
using namespace std;

//min frog follow up question k 

//recurence relation
int f(int index, int k, vector<int> h)
{
    if (index == 0)
        return 0;
    int minsteps = INT_MAX;
    int jump = 0;
    for (int j = 0; j <= k; j++)
    {
        if (index - j >= 0)
            jump = f(index - j, k, h) + abs(h[index] - h[index - j]);
        minsteps = min(minsteps, jump);
    }
    return minsteps;
}

//memoization function
 

int main()
{

    return 0;
}
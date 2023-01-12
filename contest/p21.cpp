#include <bits/stdc++.h>
using namespace std;
vector<int> findOriginalArray(vector<int> &changed)
{

    int n = changed.size();

    sort(changed.begin(), changed.end());

    vector<int> v;

    while (!changed.empty())
    {

        for (auto i = changed.begin(); i != changed.end(); i++)
        {

            for (auto j = i + 1; j != changed.end(); j++)
            {

                if (*j == 2 * (*i))
                {

                    changed.erase(i);
                    changed.erase(j);
                    v.push_back(*i);
                }
            }
        }
    }
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
     findOriginalArray(v);

    return 0;
}
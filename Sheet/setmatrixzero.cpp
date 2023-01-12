#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &v)
{
    // int rows = v.size(), cols = v[0].size();
    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (v[i][j] == 0)
    //         {
    //             int ind = i - 1;
    //             while (ind >= 0)
    //             {
    //                 if (v[ind][j] != 0)
    //                     v[ind][j] = -1;
    //                 ind--;
    //             }

    //             ind = i + 1;
    //             while (ind < rows)
    //             {
    //                 if (v[ind][j] != 0)
    //                     v[ind][j] = -1;
    //                 ind++;
    //             }

    //             ind = j - 1;
    //             while (ind >= 0)
    //             {
    //                 if (v[i][ind] != 0)
    //                     v[i][ind] = -1;
    //                 ind--;
    //             }

    //             ind = j + 1;
    //             while (ind < cols)
    //             {
    //                 if (v[i][ind] != 0)
    //                     v[i][ind] = -1;
    //                 ind++;
    //             }
    //         }
    //     }
    // }

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         if (v[i][j] <=0)
    //         {
    //             v[i][j] == 0;
    //         }
    //     }
    // }
}

int main()
{
    vector<vector<int>> v;
    v = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    setZeroes(v);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
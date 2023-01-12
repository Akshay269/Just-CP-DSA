#include <bits/stdc++.h>
using namespace std;

void printF(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (auto it : ds)
        {
            cout << it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << "\n";
        return;
    }
    // take condition
    ds.push_back(arr[ind]);
    printF(ind + 1, ds, arr, n);
    ds.pop_back();
    // not take
    printF(ind + 1, ds, arr, n);
}

void printF(int ind, vector<int> &ds, int arr[], int n, int s, int sum)
{
    if (ind == n)
    {
        if (s == sum)
            for (auto it : ds)
            {
                cout << it << " ";
            }
        cout << "\n";
        // if (ds.size() == 0)
        // {
        //     cout << "{}";
        // }

        return;
    }
    // take condition
    ds.push_back(arr[ind]);
    s += arr[ind];
    printF(ind + 1, ds, arr, n, s, sum);
    s -= arr[ind];
    ds.pop_back();

    // not take
    printF(ind + 1, ds, arr, n, s, sum);
}

// i want only one subsequence
bool printF(int ind, vector<int> &ds, int arr[], int n, int s, int sum)
{
    if (ind == n)
    { // cond satisfied
        if (s == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
            return true;
        }
        else
            return false; // not satisfied
    }
    // take condition
    ds.push_back(arr[ind]);
    s += arr[ind];
    if (printF(ind + 1, ds, arr, n, s, sum) == true)
        return true;

    s -= arr[ind];
    ds.pop_back();

    // not take
    if (printF(ind + 1, ds, arr, n, s, sum) == true)
        return true;
    return false;
}

// count of subsequences with sum k
int printF(int ind, vector<int> &ds, int arr[], int n, int s, int sum)
{
    if (ind == n)
    { // cond satisfied
        if (s == sum)
        {
            // for (auto it : ds)
            //     cout << it << " ";
            // cout << endl;
            return true;
        }
        else
            return false; // not satisfied
    }
    // take condition
    ds.push_back(arr[ind]);
    s += arr[ind];

    int l = printF(ind + 1, ds, arr, n, s, sum);

    s -= arr[ind];
    ds.pop_back();

    // not take
    int r = printF(ind + 1, ds, arr, n, s, sum);
    return l + r;
}
int main()
{

    int arr[] = {1, 2, 1};
    int n = 3;
    vector<int> ds;
    int sum = 2;
    cout << printF(0, ds, arr, n, 0, sum);
    return 0;
}
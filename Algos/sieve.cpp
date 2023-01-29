#include <bits/stdc++.h>
using namespace std;

int N = 1e7 + 9;
vector<int> v(N, 1); // vector denoting all primes
vector<int> lp(N, 0), hp(N, 0);
int main()
{
    v[0] = v[1] = 0;
    for (int i = 2; i < N; i++)
    {
        if (v[i] == 1)
        {
            lp[i] = hp[i] = i;
            for (int j = 2 * i; j < N; j++)
            {
                v[j] = 0;
                hp[j] = i;
                if (lp[j] == 0)
                {
                    lp[j] = i;
                }
            }
        }
    }

    // prime factorization log(n)
    int n;
    vector<int> v1;
    while (n > 1)
    {
        int primefac = hp[n];
        while (num % primefac == 0)
        {
            num /= primefac;
            v1.push_back(primefac);
        }
    }

    int N2 = 1e5 + 9;
    vector<int> v3(N2);  // count of divisors
    vector<int> sum(N2); // sum of divisors
    for (int i = 2; i < N2; i++)
    {
        for (int j = i; j < N2; j += i)
        {
            divisors[j].push_back(i);
            sum[j] += i;
        }
    }
}

// ye zyada accha h
for (int i = 2; i * i < N; i++)
{
    if (v[i] == 1)
    {
        for (int j = i * i; j < N; j + = i)
        {
            v[j] = 0;
        }
    }
}
}
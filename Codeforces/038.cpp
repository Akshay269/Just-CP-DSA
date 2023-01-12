#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num > 1)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                cout << num;
                break;
            }
            else
            {
                cout << num;
            }
        }
    }
    else
        cout << num;
    return 0;
}
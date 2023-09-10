#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i, n;
    bool flag = 0;
    cout << "Enter The Value : ";
    cin >> n;

    for (i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << n << " Is Non Prime Number.";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " Is Prime Number.";
    }
    return 0;
}
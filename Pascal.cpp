#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1, i;
    for (i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int i, j, n;

    cout << "ENter The Value : ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }
    return 0;
}
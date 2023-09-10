#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int num)
{
    int i;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        return true;
    }
}

int main()
{
    int i, a, b;
    cout << "Enter The Values :";
    cin >> a >> b;

    cout << "Prime Number Between " << a << " And " << b << " : ";
    for (i = a; i <= b; i++)
    {
        if (Prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}
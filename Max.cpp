#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter 3 Values : ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "The Max Number Is " << a << ".";
        }
        else
        {
            cout << "The Max Number Is " << c << ".";
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The Max Number Is " << b << ".";
        }
        else
        {
            cout << "The Max Number Is " << c << ".";
        }
    }

    return 0;
}
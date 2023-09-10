#include <iostream>
using namespace std;
int main()
{
    int n1, n2, ch;

    cout << "Enter Two Number : ";
    cin >> n1 >> n2;

    cout << "1. For Addition." << endl;
    cout << "2. For Subtraction." << endl;
    cout << "3. For Multiplication." << endl;
    cout << "4. For Division." << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << n1 + n2;
        break;

    case 2:
        cout << n1 - n2;
        break;

    case 3:
        cout << n1 * n2;
        break;

    case 4:
        cout << n1 / n2;
        break;

    default:
        cout << "Enter Valid Number..";
        break;
    }
    return 0;
}
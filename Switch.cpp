#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Your Choice :";
    cin >> ch;

    switch (ch)
    {
    case 'a':
        cout << "Hello";
        break;

    case 'b':
        cout << "Hola";
        break;

    case 'c':
        cout << "Namste";
        break;

    case 'd':
        cout << "Ciao";
        break;

    default:
        cout << "I am still learning..";
        break;
    }
    return 0;
}
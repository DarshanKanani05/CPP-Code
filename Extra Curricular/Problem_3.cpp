#include <iostream>
#include <cmath>
using namespace std;

double power(double m1, int n)
{
    double p = pow(m1, n);
    return p;
}

int power(int m2, int n)
{
    int p = pow(m2, n);
    return p;
}

int main()
{
    int ch, ch1;
    double m1;
    int m2, n = 2;
    cout << "Enter 1 For Double Type Power : " << endl;
    cout << "Enter 2 For Int Type Power : " << endl;
    cin >> ch;

    if (ch == 1)
    {
        cout << "Enter The Raise : ";
        cin >> m1;
        cout << "Default Value Of Power Is 2. Do You Went To Change? (Yes=1/No=0) : " << endl;
        cin >> ch1;
        if (ch1 == 0)
        {
            cout << "The Power Of Given Number Is " << power(m1, n) << ".";
        }
        else
        {
            cout << "Enter The Power Of Raise : ";
            cin >> n;
            cout << "The Power Of Given Number Is " << power(m1, n) << ".";
        }
    }
    else
    {
        cout << "Enter The Raise : ";
        cin >> m2;
        cout << "Default Value Of Power Is 2. Do You Went To Change? (Yes=1/No=0) : " << endl;
        cin >> ch1;
        if (ch1 == 0)
        {
            cout << "The Power Of Given Number Is " << power(m2, n) << ".";
        }
        else
        {
            cout << "Enter The Power Of Raise : ";
            cin >> n;
            cout << "The Power Of Given Number Is " << power(m2, n) << ".";
        }
    }
    return 0;
}
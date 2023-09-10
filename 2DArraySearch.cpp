#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter The Value For Element [" << i + 1 << "]x[" << j + 1 << "] : ";
            cin >> a[i][j];
        }
    }

    cout << "The Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int n;
    cout << "Enter The Number You Want To Find : ";
    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == n)
            {
                cout << "Location Of Given Number Is [" << i << "]x[" << j << "].";
            }
        }
    }
    return 0;
}
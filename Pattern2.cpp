#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter The Value :";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
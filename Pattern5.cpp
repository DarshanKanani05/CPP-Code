#include <iostream>
using namespace std;
int main()
{
    int i, j, n, count = 1;
    cout << "Enter The Value :";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
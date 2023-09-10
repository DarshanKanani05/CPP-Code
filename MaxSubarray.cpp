#include <iostream>
using namespace std;
int main()
{
    int i, j, n, k;
    cout << "Enter The Number Of Values : ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For " << i + 1 << " : ";
        cin >> arr[i];
    }

    cout << "The Max Subarray Of Given Input :" << endl;

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
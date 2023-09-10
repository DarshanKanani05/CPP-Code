#include <iostream>
using namespace std;
int main()
{
    int i, j, n, temp;

    cout << "Enter The Number Of Value : ";
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Array After Sorting : ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
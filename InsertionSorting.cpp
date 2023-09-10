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

    for (i = 1; i < n; i++)
    {
        int current = arr[i];
        j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    cout << "Array After Sorting : ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
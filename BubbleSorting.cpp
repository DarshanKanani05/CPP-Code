#include <iostream>
using namespace std;
int main()
{
    int i, j, temp, n;

    cout << "Enter The Number Of Value : ";
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For " << i + 1 << " : ";
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    cout << "Array After Sorting : ";

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
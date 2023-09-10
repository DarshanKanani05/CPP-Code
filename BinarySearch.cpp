#include <iostream>
using namespace std;

int search(int arr[], int n, int key)
{
    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, i, key;

    cout << "Enter The Number Of Array : ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For " << i + 1 << " :  ";
        cin >> arr[i];
    }

    cout << "Enter The Value Which You Have To Find : ";
    cin >> key;

    cout << "The Index Number Of Your Value Is " << search(arr, n, key) << ".";

    return 0;
}
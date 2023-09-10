#include <iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
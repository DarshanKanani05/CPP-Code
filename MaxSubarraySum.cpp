#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, j, n, k, maxSum = INT_MIN;
    cout << "Enter The Number Of Values : ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For " << i + 1 << " : ";
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }

    cout << "The Sum Of Max Subarray Of Given Input : " << maxSum;
    return 0;
}
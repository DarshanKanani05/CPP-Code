#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter The Size Of Array : ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout << "The Sum Of Max Subarray Of Given Input : " << maxSum;
    return 0;
}
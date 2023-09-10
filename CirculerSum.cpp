#include <iostream>
#include <climits>
using namespace std;
int kadane(int arr[], int n)
{
    int currentsum;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += arr[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    return maxsum;
}

int main()
{
    int n, i;
    cout << "Enter The Numer Of Element :";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For Element " << i + 1 << " : ";
        cin >> arr[i];
    }

    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);
    int totalsum = 0;
    for (i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);

    cout << "The Max Sum Is " << max(wrapsum, nonwrapsum) << ".";
    return 0;
}
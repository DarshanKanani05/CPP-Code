#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter The Size Of Array : ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter The Value For " << i + 1 << " :  ";
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }

    cout << "The Max Number Is " << maxNo << " And The Min Number Is " << minNo << ".";

    return 0;
}
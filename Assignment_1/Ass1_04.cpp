#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Number To Check : ";
    cin >> n;

    if (n <= 0)
    {
        if (n == 0)
        {
            cout << "Given Number Is Zero.";
        }
        else
        {
            cout << "Given Number Is Negative.";
        }
    }
    else
    {
        cout << "Given Number Is Positive.";
    }
    return 0;
}
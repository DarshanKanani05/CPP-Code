#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1, i;
    for (i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, ans;

    cout << "Enter The number :";
    cin >> n;

    ans = fact(n);
    cout << "Value Of Factorial Upto " << n << " Is " << ans << endl;
    return 0;
}
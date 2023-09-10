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
    int n, r, ans;
    cout << "Enter The Value Of n And r : ";
    cin >> n >> r;

    ans = fact(n) / (fact(r) * fact(n - r));

    cout << ans;
    return 0;
}
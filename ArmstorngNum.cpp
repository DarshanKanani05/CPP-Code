#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, sum = 0, l, o = 0;
    cout << "Enter The Number :";
    cin >> n;
    o = n;

    while (n > 0)
    {
        l = n % 10;
        sum += pow(l, 3);
        n = n / 10;
    }

    if (sum == o)
    {
        cout << o << " Is Armstrong Number.";
    }
    else
    {
        cout << o << " Is Not Armstrong Number.";
    }
    return 0;
}
#include <iostream>
using namespace std;

void fib(int n)
{
    int i;
    int t1 = 0;
    int t2 = 1;
    int next;

    for (i = 1; i <= n; i++)
    {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}

int main()
{
    int n;
    cout << "Enter The Number : ";
    cin >> n;

    cout << "Fibonacci Series : ";
    fib(n);
    return 0;
}
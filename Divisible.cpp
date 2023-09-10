#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter The Value Which Will Divisible : ";
    cin >> n;

    for (i = 1; i <= 100; i++)
    {
        if (i % n == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}
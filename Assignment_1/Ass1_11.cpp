#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char str[15];
    cout << "Enter The String : ";
    cin >> str;
    int vowels = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
        }
    }

    cout << "Total Vowels In String : " << vowels;
    return 0;
}
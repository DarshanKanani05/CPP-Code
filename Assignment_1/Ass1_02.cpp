#include <iostream>
using namespace std;
int main()
{
   int c, f;
   cout << "Enter The Temperature In Celsius : ";
   cin >> c;

   f = (9 * c) / 5 + 32;
   cout << "Given Temperature In Fahrenheit : " << f;
   return 0;
}
#include <iostream>
using namespace std;
int main()
{
   int l, b;
   cout << "Enter The Value For Length And Width :";
   cin >> l >> b;

   cout << "The Area Of Rectangle Is " << l * b << " And The Perimeter Of Rectangle Is " << 2 * (l + b) << ".";
   return 0;
}
#include <iostream>
using namespace std;
int main()
{
   int n, i, sum = 0;
   cout << "Enter The Value : ";
   cin >> n;

   for (i = 0; i <= n; i++)
   {
      sum = sum + i;
   }

   cout << sum << " Is Total Sum Of Series Upto " << n << ".";
   return 0;
}
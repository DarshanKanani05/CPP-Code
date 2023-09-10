#include <iostream>
using namespace std;
int main()
{
   int sum = 0, i;
   for (i = 1; i <= 10; i++)
   {
      sum = sum + i;
   }
   cout << "Sum Of First 10 Natural Number : " << sum;
   return 0;
}
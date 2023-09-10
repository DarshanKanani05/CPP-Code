#include <iostream>
using namespace std;
int main()
{
  int i;
  cout << "Enter The Number (1 to 10) : ";
  cin >> i;
  int fact = 1;

  if (i <= 10)
  {
    for (int j = 2; j <= i; j++)
    {
      fact *= i;
    }
    cout << "The Factorial Is " << fact << ".";
  }
  else
  {
    cout << "Enter The Number From Given Range..";
  }
  return 0;
}
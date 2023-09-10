#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter The Size Of Array : ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter Value For Element " << i + 1 << " :";
    cin >> arr[i];
  }
  int sum = 0, avr;
  for (int i = 0; i < n; i++)
  {
    sum = sum + arr[i];
  }
  avr = sum / n;
  cout << "The Sum Of Array Is " << sum << " And The Average Is " << avr << ".";
  return 0;
}
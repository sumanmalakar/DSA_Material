#include <iostream>
using namespace std;

// Write a function to calculate factorial of a number.(Takes Something, Returns Something)

int factorial(int n)
{
  int fact = 1;
  if (n == 0)
  {
    return 1;
  }
  for (int i = n; i; i--)
  {
    fact = fact * i;
  }
  return fact;
}

int main()
{
  int n;
  cout << "Enter a number\n";
  cin >> n;
  cout << "The factorial of " << n << " is " << factorial(n);

  return 0;
}
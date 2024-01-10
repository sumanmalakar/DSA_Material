#include <iostream>

using namespace std;

void n_to_1(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  n_to_1(n - 1);
}

void n_to_one(int n)
{
  if (n == 0)
  {
    return;
  }
  n_to_one(n - 1);
  cout << n << " ";
  cout << "suman" << endl;
}

void both(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << endl;
  both(n - 1);
  cout << endl
       << n << endl;
}

int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

int sum_of(int n)
{
  int temp, sum = 0, result;
  if (n == 0)
  {
    return 0;
  }
  temp = n % 10;
  sum = sum + temp;
  result = sum + sum_of(n / 10);

  return result;
}



int main()
{
  // int n = 10;
  // n_to_1(n);
  // one_to_n(5);
  // cout << factorial(5);
  cout << sum_of(19534);

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int n = 62, prime = 7;

  int sum = 0;
  while (n != 0)
  {
    sum += n / prime;
    n = n / prime;
  }

  cout << sum;

  return 0;
}
n = 3
x = xyx
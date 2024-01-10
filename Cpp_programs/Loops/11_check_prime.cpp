#include <iostream>

// program to calculate sum of the digits in a given number
using namespace std;

int main()
{

  int i, n = 3;
  // cout<<"Enter a number \n";
  // cin>>n;

  for (i = 2; i <= n - 1; i++)
  {
    if (n % i == 0)
    {
      break;
    }
  }

  if (i == n)
  {
    cout << "This is a Prime no.\n";
  }
  else
    cout << "This is not a prime no.";

  return 0;
}

#include <iostream>

// program to calculate sum of the digits in a given number
using namespace std;

int main()
{
 
  int n = 123;
  // cout<<"Enter a number \n";
  // cin>>n;
  int sum = 0,x;
  while (n != 0)
  {
    x = n%10;
    n = n / 10;
    sum = (sum+x)*10;
    // sum = (sum*10) + x;
  }

  cout << sum/10;

  return 0;
}
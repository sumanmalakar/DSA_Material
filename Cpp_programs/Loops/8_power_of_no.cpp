#include <iostream>

using namespace std;

// Write a program to calculate x power y.(When user input x is 2 and y is 3 then the result will be 8)

int main()
{

  int x, y;
  cout << "Enter the no. & the power you want \n";
  cin >> x >> y;

  int i = 1, power = 1;
  while (i <= y)
  {
    power = power * x;
    i++;
  }

  cout << power;

  return 0;
}
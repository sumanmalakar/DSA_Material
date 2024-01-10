#include <iostream>
using namespace std;

void two_in_one(int a, int b, int *sum, int *mul)
{
  *sum = a + b;
  *mul = a * b;
}

int main()
{
  int a, b, sum, mul;
  cout << "Enter a, b  : \n";
  cin >> a >> b;

  two_in_one(a, b, &sum, &mul);

  cout << "The sum is : " << sum << "\n";
  cout << "The multiplication is : " << mul;
}
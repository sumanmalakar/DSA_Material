#include <iostream>
// program of Given no. is even/odd without using modulo(%) operator

using namespace std;

int main()
{
  int n;
  cout << "Enter a number \n";
  cin >> n;

  if (n&1)
  {
    cout << "No is odd";
  }
  else
  {
    cout << "No is even";
  }

  return 0;
}

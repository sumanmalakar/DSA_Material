#include <iostream>
// program of Given no. is even/odd without using modulo(%) and bitwise(&) operator

// hamesh program ko dry run karke dekh,logic fir se ban jayega

using namespace std;

int main()
{
  int n;
  cout << "Enter a number \n";
  cin >> n;

  if ((n/2)*2 == n)
  {
    cout << "No is even";
  }
  else
  {
    cout << "No is odd";
  }

  return 0;
}

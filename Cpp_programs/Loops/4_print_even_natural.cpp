#include <iostream>

// program to print first 10 even natural no.

using namespace std;

int main()
{

  for (int i = 1; i <= 20; i++)
  {
    if(i%2 == 0)
    cout << i << endl;
  }

  // for reverse
  cout << "Reverse natural no. \n";

   for (int i = 20; i >= 1; i--)
  {
    if (i % 2 == 0)
      cout << i << endl;
  }


}
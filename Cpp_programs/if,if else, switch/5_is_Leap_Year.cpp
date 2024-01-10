#include <iostream>
using namespace std;

// some century years => 1600, 1700, 1800, 1900, 2000, 2100 ...
// some normal years => 1947, 1850, 2010, 2016 , 2021 ...
// century year me %400 karna aur normal year m %4 se karna

int main()
{

  int n;
  cout << "Enter a year \n";
  cin >> n;

  if (n % 100 == 0) // this mean we check a year is century year or not
  {
    if (n % 400 == 0) // if this is centuray than check is year is leap or not
    {
      cout << "This year is leap year";
    }
    else
    {
      cout << "Not a leap year ";
    }
  }
  else
  {
    if (n % 4 == 0)
      cout << "This year is leap year";
    else
      cout << "This is not a leap year";
  }

  return 0;
}

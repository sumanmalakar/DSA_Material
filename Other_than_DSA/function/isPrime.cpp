#include <iostream>
using namespace std;

bool isPrime(int n)
{ 
  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

int main()
{

 for(int i=2; i<30; i++){

  if (isPrime(i))
  {
    cout <<i<<" Prime\n";
  }
  else
  {
    cout <<i<< " Not Prime \n";
  }
}
  return 0;
}
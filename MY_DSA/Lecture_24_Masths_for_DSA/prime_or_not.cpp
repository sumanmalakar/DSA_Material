#include <iostream>
using namespace std;
bool isPrimes(int n)
{
  if (n < 2)
    return 0;

  int count = 0;

  for (int i = 2; i < n; i++)
  {
    
      if (n%i == 0)
      {
        return false;
      }
    
  }

  return true;
}

int main()
{

  int n = 2;
  
  if(isPrimes(n)){
    cout<<n<<" is prime number ";
  }
  else{
    cout<<"not a prime number ";
  }

  return 0;
}
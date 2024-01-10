#include<iostream>
using namespace std;
int countPrimes(int n)
{
  if (n < 2)
    return 0;

  int count = 0;

  for (int i = 2; i < n; i++)
  {
    int j = 2;
    for (j; j < i; j++)
    {
      if (i % j == 0)
      {
        j = 0;
        break;
      }
    }
    if (j == i)
    {
      count++;
    }
  }

  return count;
}

 int main(){

int n = 10;
cout<<countPrimes(n);
  

return 0;
}
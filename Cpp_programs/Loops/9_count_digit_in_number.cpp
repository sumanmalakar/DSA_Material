#include <iostream>

// program to count digits in a given number
using namespace std;

int main()
{

int n = 2724;
int count = 0;
while(n!=0){
  
  n = n/10;
  count = count+1; // count++;
}

cout<<count;

  return 0;
}
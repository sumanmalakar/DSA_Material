#include <iostream>
using namespace std;

// write a function that takes in a number and print it
// print first 5 numbers: 1 2 3 4 5

void number(int n)
{
  if(n==5){ // Base condition for stop calling the function.
  cout<<"5";
  return;
  }
  cout<<n<<endl;
  number(n+1);

}

int main()
{

  number(1);

  return 0;
}

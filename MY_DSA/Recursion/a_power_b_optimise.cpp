#include <iostream>
using namespace std;

// ye optimise hai
// code ko dry run samjh aa jayega..

int a_power_b(int a, int b)
{

 // baseCase
 if(b==0)return 1;
 

 if(b==1)return a;

//Recursive Call
  int ans = a_power_b(a,b/2);

  // if b is even
  if(b%2 == 0){
    return ans*ans;
  }else{
    // if b is odd
    return a*ans*ans;
  }
} 

int main()
{

  int a = 3, b = 11;

  int res = a_power_b(a, b);

  cout << "Result is = " << res;

  return 0;
}
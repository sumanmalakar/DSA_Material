#include <iostream>

using namespace std;

int main()
{
  int n;
  cout << "Enter a number\n";
  cin >> n; // n = 5;"
  int sum = 0;
  int evenSum = 0;
  int oddSum = 0;
  int product = 1;

  // sum & product of natural no.
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
    product = product*i;

    // sum for even natural no
    if(i%2==0){
      evenSum = evenSum + i;
    }
    else{
      oddSum = oddSum + i;
    }
  }
  cout<<"The sum is = "<<sum<<endl;
  cout << "The sum of evenNatural no is = " << evenSum<< endl;
  cout << "The sum of oddNatural no is = " << oddSum << endl;
  cout<<"The product is = "<<product<<endl;

  return 0;
}
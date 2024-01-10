#include <iostream>
using namespace std;

int reverse(int n){
  int result = 0;
  while (n != 0)
  {
    int temp = n % 10;
    result = result*10 + temp;
    n = n / 10;
  }
  return result;
}

int num_sum(int n){
  int sum = 0;
  while (n != 0)
  {
    int temp = n % 10;
    sum += temp;
    n = n / 10;
  }
  return sum;
}

int add_one(int n){
  int result = 0;
  while (n != 0)
  {
    int temp = n % 10;
    result = result * 10 + temp +1;
    n = n / 10;
  }
  return reverse(result);
}

int main()
{

  int n;
  cout<<"enter a number \n";
  cin>>n;

  cout <<"sum is = "<<num_sum(n)<<endl;
  cout <<"reverse = " << reverse(n)<<endl;
  cout<<"add one = "<<add_one(n)<<endl;

  return 0;
}
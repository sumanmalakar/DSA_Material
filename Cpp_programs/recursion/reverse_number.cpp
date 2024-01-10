#include<iostream> 
using namespace std; 

int reverse(int n){
  if(n==0){
    return 0;
  }
  int temp;
  temp = n%10; 
 return (temp + reverse(n/10))*10;
}

int revers2(int n){
  if(n==0){
    return 0;
  }
  int temp, sum;
  temp = n%10;
  sum = temp + 10*sum;
  return sum + revers2(n/10);
}

int revers3(int n)
{
  if (n == 0)
  {
    return 0;
  }
  int temp; 
  int sum;
  temp = n % 10;
  sum = temp + 10 * sum;
  return sum + revers3(n / 10);
}
 int main(){

int n = 12349;
  // cout<<reverse(n/10);
  // cout<<revers2(n);
cout << revers3(n);

return 0;
}
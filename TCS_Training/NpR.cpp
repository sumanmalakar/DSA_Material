#include<iostream>
using namespace std; 

int fact(int number){
  if(number == 1 || number == 0){
    return number;
  }

  return number*fact(number-1);
}

 int main(){

  int n = 5, p = 3;
  
  cout<<fact(n)/fact(n-p);
  // cout<<fact(n);

return 0;
}
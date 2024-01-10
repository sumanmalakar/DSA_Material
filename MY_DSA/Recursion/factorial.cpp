#include<iostream>
using namespace std; 

int factorial(int n){

  // baseCase
  if(n==0) return 1;

  return n*factorial(n-1);
}

 int main(){

int n ;

cout<<"Enter a number \n";
cin>>n;

cout << "factorial is = " << factorial(n)<<endl;

return 0;
}
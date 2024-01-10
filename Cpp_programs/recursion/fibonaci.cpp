#include<iostream> 

using namespace std; 

int fibo(int n){

  if(n<2){  // base condition 
    return n;
  }
  return fibo(n-1) + fibo(n-2);
}


 int main(){

cout<<fibo(50);  

return 0;
}
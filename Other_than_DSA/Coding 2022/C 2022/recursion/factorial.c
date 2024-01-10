#include<stdio.h> 
int fact(int n){
  if(n==0) return 1;
  int factorial = n*fact(n-1);
   return factorial;
}

 int main(){

int n = 15;

printf("The factorail of %d is %d",n,fact(n));
  

return 0;
}
#include<stdio.h> 
int fibo(int n){
  if(n==0) return 0;
  return fibo(n-1) + fibo(n-2);
}

 int main(){
int n = 2;

printf("%d ", fibo(n));
  

return 0;
}
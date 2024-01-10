#include<stdio.h> 

 int main(){

  int x = 5, *p, **q, ***r;
  p = &x;
  q = &p;
  r = &q;

  **q = 7;
  printf("x = %d \n", x);

  ***r = 9;
  printf("x = %d \n", x);

  return 0;
}
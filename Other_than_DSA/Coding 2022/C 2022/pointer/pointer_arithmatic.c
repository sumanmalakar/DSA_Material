#include<stdio.h> 

 int main(){

  int a[5] = { 10,1,-1,20,11};

  int *p = &a[0];
  p++;
  // p = p+2;
  // p = p+3;
  *p = 20;
  printf("%d ", *p);

return 0;
}
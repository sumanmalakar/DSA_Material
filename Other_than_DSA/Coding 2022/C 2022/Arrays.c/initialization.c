#include<stdio.h> 

 int main(){

  int a[5] = {1,0,-2,20,3};
  int b[5]  = {2,3,4};
  char c[5] = {'s','u','m','a','n'};


  for(int i =0; i<5; i++){
    printf("%d ", a[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++)
  {
    printf("%d ", b[i]);
  }
  printf("\n");

  for (int i = 0; i < 5; i++)
  {
    printf("%c", c[i]);
  }

return 0;
}
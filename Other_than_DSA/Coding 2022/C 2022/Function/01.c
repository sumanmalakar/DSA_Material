#include<stdio.h>

void sum()
{
  int a, b, sum = 0;
  printf("Enter two number \n");
  scanf("%d %d", &a, &b);
  sum = a + b;
  printf("sum = %d ", sum);
}

int main(){
  sum();
  printf("Hello suman! \n");
  sum(); 

return 0;
}
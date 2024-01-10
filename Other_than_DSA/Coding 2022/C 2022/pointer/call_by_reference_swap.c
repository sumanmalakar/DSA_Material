#include <stdio.h>

int wrong_swap(int a, int b)
{
  int c = a;
  a = b;
  b = c;
  // return 0;
}

int swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int x = 3, y = 4;
  printf("The value of x and y before swap is %d and %d \n", x, y);

  // wrong_swap(x,y); // will not work due to call by value
  swap(&x, &y); // will work due to call by reference

  printf("The value of x and y after swap is %d and %d \n", x, y);

  return 0;
}
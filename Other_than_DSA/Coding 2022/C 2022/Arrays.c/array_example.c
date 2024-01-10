#include <stdio.h>
int main()
{
  int a[5] , b[5], sum_a[5];
  int sum = 0, avg = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the element of 1st array %d ", i + 1);
    scanf("%d", &a[i]);
  }
  printf("\n");
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the element of 2nd array %d ", i + 1);
    scanf("%d", &b[i]);
  }
  printf("\n");


  for (int i = 0; i < 5; i++)
  {
    sum_a[i] = a[i] + b[i];
  }

  for(int i=0; i<5; i++){
    printf("The sum of %d element is  = %d \n",i, sum_a[i]);
  }

  return 0;
}
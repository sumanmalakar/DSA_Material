#include <stdio.h>

int main()
{

  int a[5];
  int sum = 0, avg = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("Enter the element of %d ", i + 1);
    scanf("%d", &a[i]);
  }

  printf("\n");
  // printf("Your enter elements are :- \n");
  for (int i = 0; i < 5; i++)
  {
    sum += a[i];

  }
  printf("The sum is %d " , sum);
  printf("\n");
  avg += sum/5;

  printf("The avg is %d ", avg);
  return 0;
}
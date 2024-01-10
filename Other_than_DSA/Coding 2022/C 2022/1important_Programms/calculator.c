#include<stdio.h> 

 int main(){

  int a,b,choice;
  printf("Enter two number \n");
  scanf("%d %d", &a, &b);

  printf("Enter 1 for sum \n");
  printf("Enter 2 for subtraction \n");
  printf("Enter 3 for multiplication \n");
  printf("Enter 4 for devide \n");

 scanf("%d",&choice);


  switch(choice){
    case 1:
    printf("The sum of a %d and b %d is %d", a,b , a+b);
    break;
    case 2:
      printf("The subtraction of a %d and b %d is %d", a, b, a - b);
      break;
    case 3:
      printf("The multiplication of a %d and b %d is %d", a, b, a * b);
      break;
    case 4:
      printf("The devition of a %d and b %d is %d", a, b, a / b);
      break;
      default:
      printf("Invalid Entry!!");
  }

  return 0;
}
#include<stdio.h> 

 int main(){

  int age;
  int vipPass = 0;
  vipPass = 1;
  printf("Enter your age \n");
  scanf("%d", &age);

  // if (age >= 18  && age <= 70)
  if ((age >= 18 && age <= 70) || !(vipPass == 1))

  {
    printf("you are above 18 and below 70, you can drice \n");
  }
  else
  {
    printf("You can not drive \n");
  }

return 0;
}
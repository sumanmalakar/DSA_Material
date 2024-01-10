#include<stdio.h> 

 int main(){

  int marks[5];

  for(int i =0; i<5; i++){
    printf("Enter the value of marks for student %d: \n", i+1);
    scanf("%d", &marks[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    printf("The marks = %d \n", marks[i]);

  }

return 0;
}
#include<stdio.h> 

 int main(){

  char name[30];
  printf("Enter your name \n");
  // scanf("%s", name);
  gets(name);

  printf("%s", name);

return 0;
}
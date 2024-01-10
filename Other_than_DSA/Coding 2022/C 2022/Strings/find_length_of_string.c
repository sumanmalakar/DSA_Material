#include<stdio.h> 
#include<string.h>

// strlen() is the predefine(<string.h>) function for the finding the length of strings

 int main(){

char name[30];
printf("Enter your name \n");
gets(name);

int count = strlen(name);

printf("String length is =  %d", count);
  

return 0;
}
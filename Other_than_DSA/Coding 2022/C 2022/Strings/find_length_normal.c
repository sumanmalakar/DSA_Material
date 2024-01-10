#include<stdio.h> 

 int main(){

char name[30];
int i=0, count = 0;
printf("Enter your name \n");
gets(name);

while(name[i]!='\0'){
  count++;
  i++;
}

printf("The length of string is = %d",count);
  

return 0;
}
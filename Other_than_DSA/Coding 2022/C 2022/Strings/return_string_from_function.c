#include<stdio.h> 

char * display(){
  return "suman";
}

 int main(){

char *str;
str = display();
printf("string is %s", str);
  

return 0;
}
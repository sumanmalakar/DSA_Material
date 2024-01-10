#include<stdio.h> 
#include<string.h>

// for reverse a string strrev() is predefine function that we have in <string.h> header file

 int main(){
   char name[30] = "123456789";
   strrev(name);

printf("%s", name);

  

return 0;
}
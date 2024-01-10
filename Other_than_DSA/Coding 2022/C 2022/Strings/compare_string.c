#include<stdio.h> 
#include<string.h>

// strcmp() is predefine function for comparing the two strings

 int main(){

   char s1[] = "Hello";
   char s2[] = "Hello";

   int value = strcmp(s1,s2);
   if(value == 0){
     printf("Both the strings are equal..");
   }else{
     printf("Both the strings are not equal..");
   }

   printf("\n %d ", value);

  

return 0;
}
#include<stdio.h> 
#include<string.h>
// c program to convert string from upperCase to loweCase
// a = 97, b = 98, c= 99
// A = 65, B = 66, C= 67 

 int main(){

char name[30] = "sumanmalakar";

for(int i=0; i<name[i]!='\0'; i++){
  if(name[i]>='a' && name[i]<='z'){
  name[i] -= 32; }
}

printf("%s",name);
  

return 0;
}
#include<stdio.h> 

int strlen(char name[30]){
  int count = 0;
  int i = 0;
  while (name[i] != '\0')
  {
    count++;
    i++;
  }
  return count;
}

 int main(){

  char name[30] = "sumanmalakar";

int count = strlen(name);
printf("The length of string is %d ", count);

return 0;
}
#include<stdio.h> 
#include<string.h>

struct employee{
  int code;
  float salary;
  char name[30];
};

 int main(){

struct employee e1;
e1.code = 100;
e1.salary = 34.34;
// e1.name = "Suman"; ---> wont work
strcpy(e1.name, "Suman");

printf("%d \n", e1.code);
printf("%f \n", e1.salary);
printf("%s \n", e1.name);

return 0;
}
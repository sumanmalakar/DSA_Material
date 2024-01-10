#include <stdio.h>
#include <string.h>

struct employee
{
  int code;
  float salary;
  char name[30];
};

int main()
{

  struct employee facebook[3];

  facebook[0].code = 100;
  facebook[0].salary = 100;
  strcpy(facebook[0].name, "suman");

  facebook[1].code = 100;
  facebook[1].salary = 100;
  strcpy(facebook[1].name, "sumanmalakar");

  facebook[2].code = 100;
  facebook[2].salary = 100;
  strcpy(facebook[2].name, "sumankhiladi");

  printf("done");

  //  for(int i=0; i<3; i++){
  //    printf("Enter the code, salary, name for employee %d \n",i+1);
  //    scanf("%d %f %s ", &e[i].code, &e[i].salary, e[i].name );
  //  }

  //  for (int i = 0; i < 3; i++)
  //  {
  //    printf("The code, salary, name for employee %d \n %d  %f  %s ", i + 1, e[i].code, e[i].salary, e[i].name);
  
  //  }

   return 0;
}
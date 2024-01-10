#include <stdio.h>
#include<string.h>

// predefine functoin is strcat(s1,s2) or strcat(s2,s1)

int main()
{
  char s1[30] = "Suman";
  char s2[10] = "Malakar";

  int i = 0, lenth;

  lenth = strlen(s1);

  while(s2[i]!='\0'){
    s1[lenth + i] = s2[i];
    i++;
  }

printf("%s",s1);


  return 0;
}
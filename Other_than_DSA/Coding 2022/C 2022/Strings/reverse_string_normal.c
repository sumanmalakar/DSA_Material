#include <stdio.h>
#include <string.h>

// for reverse a string strrev() is predefine function that we have in <string.h> header file

int main()
{
  char name[30] = "123456789";
  int length = strlen(name);

  for (int i = 0; i < length / 2; i++)
  {
    char temp = name[i];
    name[i] = name[length - i - 1];
    name[length - i - 1] = temp;
  }

  printf("%s", name);

  return 0;
}
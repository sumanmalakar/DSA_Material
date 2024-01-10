#include <iostream>
#include <string.h>
using namespace std;

char *alphanumeric(char str[])
{
  int n = sizeof(str) / sizeof(int);
  int alphabet = 0, numeric = 0;
  int i, j;
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'b')
    {
      alphabet = alphabet + 1;
    }
    if (str[i] >= 0)
    {
      numeric = numeric + 1;
    }
  }
  if (alphabet >= 1 && numeric >= 1)
  {
    return "This is alpha_numeric_string! ";
  }
  else
  {
    return "This is Not alpha_numeric_string!";
  }
}

int main()
{
  char str[] = "128888a";

  cout << alphanumeric(str);

  return 0;
}
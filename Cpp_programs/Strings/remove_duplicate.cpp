#include <iostream>
// #include <string.h>
// #include <string>
using namespace std;

char *remove_duplicate(char str[]){

  int i = 0, j;
  while (str[i] != '\0')
  {
    int temp = str[i];
    for (j = i + 1; str[j]; j++)
    {
      if (temp == str[j])
      {
        str[i] = str[j];
        for (int k = j; str[k]; k++)
        {
          str[k] = str[k + 1];
        }
        // cout << str << endl;
      }
    }
    i++;
  }
  return str;
}

int main()
{
  char str[] = "cbacdcbc";

  cout << remove_duplicate(str);

  return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

// Write a program which string as argument and return the complete sting
// ASCII code  'a' => 97,     'A'=>65
//             'b' => 98,     'B'=>66
//             'c' => 99...   'C'=>67...

char upper_case(char string[], char dit[]){
  // "suman"
  // int n = strlen(string);
  int i,k=0;
  int temp;
  while(string[k] != '\0')
  {
  temp = string[k];

    for (i = 0; string[i]!='\0'; i++)
    {
      if (temp> string[i])
      {
        temp = string[i];
      }
    }
    dit[k] = temp;

    k++;
  }

}

int main()
{

  char str[10] =  "suman";
  char dit[10];
  // cout << "Enter the string \n";
  // gets(str);
  // upper_case(str);
  // cout<<str;
  upper_case(str, dit);
  cout<<dit;

  return 0;
}
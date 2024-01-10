#include <iostream>
#include <string.h>
using namespace std;

//  Suman --> namuS

int reverse(char str[])
{
  int n = strlen(str);
  int temp;
  for (int i = 0; i < n / 2; i++)
  {
    temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }
}
int revers2(string str){
int n = sizeof(str) / sizeof(int);
char c[n];
for (int i = n; i >= 1; i--)
{
  c[i] = str[n - i];
}
// c[n] = str[];
}

int main()
{

  char str[] = "Suman";

  revers2(str);
  cout << str;

  return 0;
}

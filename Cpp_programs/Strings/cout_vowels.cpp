#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int vowel_count(char str[])
{
  char vowels[] = "aeiou";
  int count = 0;
  int i, j;
  for (i = 0; str[i] != '\0'; i++)
  {
    for (j = 0; vowels[j]; j++)
    {
      if (vowels[j] == str[i])
      {
        count++;
      break;
      }
    }
  }
  return count;
}

int main()
{
  char str[] = {};
  cout << "Enter the string \n";
  gets(str);
  strlwr(str); // to covert into lowercase

  cout <<"No of vowels in your string is => "<< vowel_count(str);
  // cout<<strlwr(str);

  return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

// Write a program to check weather string is pelindrome or not usin function
// aba => penlidrom, 123321 => Pelindrom, 123421 => not
// suman => not pelindrome

char * pelindrom(char str[]){
  int n = strlen(str);
  int i;
  for (i = 0; i < n / 2; i++)
  {
    if (str[i] != str[n - i - 1])
    {
      return "String is not a pelindrom";
      break;
    }
  }
  if (i == n / 2)
  {
    return "String is pelindrom";
  }
}

int isPelindrom(char str[]){
  int n = strlen(str);
  int i;
  for (i = 0; i < n / 2; i++)
  {
    if (str[i] != str[n - i - 1])
    {
      return(0);
    }
  }
 return(1);
}

int main()
{

  char str[] = "123321";
  int i;
  // cout << "Enter the string \n";
  // gets(str);
  // upper_case(str);
  // cout<<str;

//  cout<< pelindrom(str);

if(isPelindrom(str)){
  cout<<"Palindrome";
}
else{
  cout<<"Not a Palindrome";
}
 
  return 0;
}
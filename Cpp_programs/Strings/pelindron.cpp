#include <iostream>
#include <string.h>
using namespace std;

// Write a program to check weather string is pelindrome or not
// aba => penlidrom, 123321 => Pelindrom, 123421 => not
// suman => not pelindrome
int main()
{

  char str[] =  "123321";
  int i;
  // cout << "Enter the string \n";
  // gets(str);
  // upper_case(str);
  // cout<<str;
  
  int n = strlen(str);
  for(i=0; i<n/2; i++){
    if(str[i] != str[n-i-1]){
        cout<<"String is not a pelindrom";
        break;
    }
  }
if(i==n/2){
  cout<<"String is pelindrom";
}
  return 0;
}
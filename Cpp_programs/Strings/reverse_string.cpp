#include<iostream> 
#include<string.h>
using namespace std; 

// Write a program to revers a string using strrev() function

//reversing string by our own function
char reverse(char str[]){
  int n = strlen(str);
  for (int i = 0; i < n / 2; i++)
  {
    int temp;
    temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }
  cout << str;
}

// return string from a function
char* reverse_return_string(char str[])
{
  int n = strlen(str);
  for (int i = 0; i < n / 2; i++)
  {
    int temp;
    temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }
  return str;
}

 int main(){
char str[20];
cout<<"Enter the string\n";
gets(str);

// reversing string by inbuit function
// cout<<"The reverse string is :=> "<<strrev(str);

// reverse(str);

cout<<"The reverse String is => "<<reverse_return_string(str);

  

return 0;
}
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  char ch[30];
  cout << "Enter your name \n";
  cin >> ch;

int len = strlen(ch);

for(int i=0; i<len/2; i++){
  swap(ch[i],ch[len-i-1]);
}

cout<<"Reverse Array is = "<<ch;
  

  return 0;
}
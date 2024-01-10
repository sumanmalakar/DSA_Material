#include <iostream>
using namespace std;

// Passing the String into a function

void display(char str[]){
    cout<<str;
}

void modify(char str1[], char str2[]){
  int i, length = 0;
  for(i = 0; i<str1[i]!='\0'; i++){
    length = length+1; 
  }

  cout<<"Lenght of first string is "<<length<<endl;
  str2[1] = 'k';

 cout<<str1<<" "<<str2;

 

}

int main()
{
  char str1[] = "suman";
  char str2[] = "malakar";
  // display(str1);
  modify(str1, str2);
  
  return 0;
}
#include<iostream>
#include<string.h>
using namespace std; 

 int main(){

char ch[30];
cout<<"Enter your name \n";
cin>>ch;

int i=0 , count = 0;
while(ch[i]!='\0'){
           count++;
           i++;
}
  // cout<<"Length of string is = "<<count<<endl;

  // using strlen
  int l = strlen(ch);
  cout << "Length of string is(strlen) = " << count << endl;

  return 0;
}
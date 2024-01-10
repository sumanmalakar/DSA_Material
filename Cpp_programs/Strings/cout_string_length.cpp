#include<iostream> 
#include<string.h>
using namespace std; 

// Program to calculate length of string using strlen() function

 int main(){
char str[] = { };
cout<<"Enter a string\n";
// cin>>str;
gets(str);
cout<<endl;
cout<<str<<endl;
cout<<"The length of string is " <<strlen(str);
  

return 0;
}
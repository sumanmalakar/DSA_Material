#include<iostream> 
using namespace std; 

// Write a program which string as argument and return the complete sting

char * retur_sting_function(char string[]){
   return string;
}

 int main(){

char str[] = { };
cout<<"Enter the string \n";
gets(str);

cout<<"Returning string is => "<<retur_sting_function(str);

return 0;
}
#include<iostream> 
#include<string.h>
using namespace std; 

// Write a program which string as argument and return the complete sting
// ASCII code  'a' => 97,     'A'=>65
//             'b' => 98,     'B'=>66 
//             'c' => 99...   'C'=>67...


char * upper_case(char string[]){

  for(int i=0; string[i]!='\0'; i++){
   if(string[i]>='a' && string[i]<='z'){
     string[i] = string[i] - 32;
   }
   }
   return string;
}

 int main(){

char str[] = { };
cout<<"Enter the string \n";
gets(str);
// upper_case(str);
// cout<<str;
cout<<upper_case(str);

return 0;
}
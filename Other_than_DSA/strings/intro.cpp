#include<iostream>
using namespace std; 

 int main(){

  char name[20];
  
  cout<<"Enter your name "<<endl;
  cin>>name; // space to nahi leta hai
 name[2] = '\0';

  cout<<name;

return 0;
}
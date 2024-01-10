#include<iostream>
using namespace std; 

 int main(){

  // pointer to int is created, and pointing to some garbage address
  // int *p = 0;
  
  // cout<<*p<<endl;

  int num = 5;
  int a = num;

  cout<<num<<endl; //5
  cout<<a++<<endl; // 5

  int *p = &num;
  cout<<"before "<<num<<endl; // 5
  (*p)++;
  cout<<"after "<<num<<endl; // 6

  //copying a pointer
  int *q = p;
  cout<<p<<" - "<<q<<endl;
  cout<<*p<<" - "<<*q<<endl;

  //important a pointer
int i = 3;
int *t = &i;

cout<<(*t)++<<endl;

*t = *t + 1;
cout<<*t<<endl;
cout<<" before t "<<t<<endl;
t = t+1;
cout<<"after t "<<t<<endl;



return 0;
}
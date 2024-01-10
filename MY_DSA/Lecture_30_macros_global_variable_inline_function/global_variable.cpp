#include<iostream>
using namespace std; 

// global variable
int score = 14;

// try to avoid using global varibles kyoki ise koi v change kar skta hai

void a(int &i){

  cout<<score<<" in a function "<<endl;

  char ch = 'a';
  cout<<i<<endl;
}

void b(int &i){
  cout<<score<<" in b "<<endl;
  cout<<i<<endl;
}

 int main(){

  cout<<score<<"in main "<<endl;

  int i = 5; //local variable

  a(i);
  b(i);

  {
    int i = 2; // local variable
    cout<<i<<endl;

  }

return 0;
}
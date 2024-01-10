#include<iostream>
using namespace std; 

class A{
  public:
  void sayHello(){
    cout<<"Hello Suman Malakar "<<endl;
  }
   
   //function overloading with different parameter
  int sayHello(char name){
    cout<<"Hello Suman Malakar 2 "<<endl;
    return 1;
  }

  void sayHello(string name){
    cout<<"Hello "<<name<<endl;
  }
};

 int main(){

A obj;
obj.sayHello();
  

return 0;
}
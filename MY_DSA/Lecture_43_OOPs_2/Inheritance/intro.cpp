#include<iostream>
using namespace std; 

class Student{
 
//Encapsulation
 private:
   string name;
   int age;
   int height;
 
 public:
 int getAge(){
   cout<<"calling age function \n";
   return this->age;
 }
};

 int main(){

Student first;
 cout<<first.getAge()<<endl;
cout<<"Sab sahi chal rha hai.."<<endl;
  

return 0;
}
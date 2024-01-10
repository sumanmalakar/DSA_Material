#include<iostream>
// program of Swapping without using third variable

using namespace std;

int main(){
  int a,b;
  cout<<"Enter the value of a and b \n";
  cin>>a>>b;

  // let user give a = 10, b = 20
  // program hamesh step wise run hota hai!!!!!!!!

  a = a+b; // a = 30 => (a+b = 10+20 = 30), b = 20
  b = a-b; // b = 10 => (a-b = 30-20 = 10), a = 30
  a = a-b; // a = 20 => (a-b = 30-10 = 20), b = 10

  cout<<a<<" "<<b;

}
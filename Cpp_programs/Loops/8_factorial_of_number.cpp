#include<iostream> 

using namespace std; 

 int main(){

  int n;
  cout<<"Enter a number \n";
  cin>>n;

  int fact = 1;
  for(int i = n; i; i--){
        fact = fact*i;
  }

  cout<<"factorial is "<<fact;

return 0;
}
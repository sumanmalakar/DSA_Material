#include<iostream>
using namespace std; 

void print(int n){
  if(n>5)return;
  cout<<"n = "<<n<<" suman"<<endl;
  print(n+1);
}

 int main(){

print(1);
  

return 0;
}
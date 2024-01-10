#include<iostream>
using namespace std; 

int fibo(int n){
  int a = 0 , b = 1, re=0;
  for(int i = 2; i<n; i++){
   int c = a+b;
    re = c;
    cout<<a<<" + "<<b<<" = " <<re<<endl;
    a = b;
    b = c;

  }
  return re;
}

 int main(){

int n;
cout<<"Enter n \n";
cin>>n;
cout<<fibo(n);
  

return 0;
}
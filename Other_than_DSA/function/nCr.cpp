#include<iostream> 
using namespace std; 

int fact(int n){
  if(n==0)return 1;
  return n*fact(n-1);
}

int nCr(int n, int r){
 int result = fact(n)/(fact(r)*fact(n-r));
 return result;
}


 int main(){
int n,r;
cout<<"Enter value n \n";
cin>>n;
cout<<"Enter value of r\n";
cin>>r;

cout<<"result = "<<nCr(n,r);

  

return 0;
}
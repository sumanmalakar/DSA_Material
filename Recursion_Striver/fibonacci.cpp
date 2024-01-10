#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
  //base case
  if(n<=1) return n;
  int last = fibo(n-1);
  int slast = fibo(n-2);

  return last + slast;

}

int main(){
  int n;
  cout<<"Enter a number ";
  cin>>n;
  cout<<"Fibonacci of "<<n<<" is = "<<fibo(n);
  
  return 0;
}
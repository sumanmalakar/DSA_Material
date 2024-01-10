#include<iostream>
using namespace std; 

// ye optimise nahi hai

int a_power_b(int a, int b){

static int result =  1;

// baseCase 
if(b==0)return result;

result = result*a;

// b--;

return a_power_b(a, b-1);
}

 int main(){

   int a = 2, b = 5;

   int res = a_power_b(a, b);

   cout<<"Result is = "<<res;

  

return 0;
}
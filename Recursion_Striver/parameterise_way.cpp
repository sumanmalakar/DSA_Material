#include<bits/stdc++.h>
using namespace std; 

void sum_of_first_N(int i, int sum){
  if(i<1){
    cout<<"The sum is = "<<sum;
    return;
  }
  sum_of_first_N(i-1, sum+i);
}

 int main(){
   int n = 30;
   int sum = 0;
   sum_of_first_N(n,sum);

  

return 0;
}
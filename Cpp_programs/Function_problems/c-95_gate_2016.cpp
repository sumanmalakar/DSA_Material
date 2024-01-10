#include<iostream>

using namespace std;

void incr(int *p, int m){
   m = m + 5;
   *p = *p + m;
   return;
}

int main(){
  int i,j;
  i = 5, j=10;
  incr(&i, j);
  cout<<i+j;
}
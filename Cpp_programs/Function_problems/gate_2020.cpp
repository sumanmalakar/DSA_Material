#include<iostream>

using namespace std;

int incr(int i){
   int count = 0;
  // static int count = 0;
  count = count + i;
  return (count);
}

int main(){
  int i,j;
  for(i=0; i<=4; i++){
    j = incr(i);
  }
  cout<<j;
}
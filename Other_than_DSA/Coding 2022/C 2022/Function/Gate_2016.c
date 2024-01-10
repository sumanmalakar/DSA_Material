#include<stdio.h> 
void fun(int *p, int m){
  m = m+5;
  *p = *p +m;
  return;
}

 int main(){
   int i=5, j=10;
   fun(&i,j);
   printf("%d ", i+j);

  

return 0;
}
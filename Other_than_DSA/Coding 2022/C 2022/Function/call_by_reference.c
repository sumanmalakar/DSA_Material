#include<stdio.h> 
void fun(int *x, int *y){
  *x = 70;
  *y = 50;
  printf("fun function x = %d , y = %d \n", *x, *y);
}

 int main(){
   int x = 5, y =7;
   printf("before x = %d , y = %d \n", x, y);
   fun(&x, &y);
   printf("after x = %d , y = %d ", x,y);

  

return 0;
}
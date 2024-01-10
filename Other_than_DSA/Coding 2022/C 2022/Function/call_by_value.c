#include<stdio.h> 
void fun(int x, int y){
  x = 7; 
  y = 5;
  printf("void function x = %d , y = %d \n", x, y);
}

 int main(){
int x = 5, y = 7;
fun(x,y);
printf("main function x = %d , y = %d ", x,y);
  

return 0;
}
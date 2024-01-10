#include<stdio.h> 
int sum(int x, int y){
  return (x+y);
}

 int main(){
   int x,y;
   printf("Enter two numbers \n");
   scanf("%d %d", &x, &y);

   printf("The sum is %d ", sum(x, y));

   return 0;
}
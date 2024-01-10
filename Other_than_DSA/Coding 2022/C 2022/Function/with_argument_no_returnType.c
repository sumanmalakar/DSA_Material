#include<stdio.h> 
void sum(int x, int  y){
  printf("The sum of %d and %d is = %d ",x,y, x+y);
}


 int main(){
   int x,y;
   printf("Enter value of x and y \n");
   scanf("%d %d", &x,&y);

// sum(50,73);
sum(x,y);
  

return 0;
}
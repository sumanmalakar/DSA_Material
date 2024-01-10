#include<stdio.h> 

 int main(){
   int x, sum = 0;
 
 for(int i = 1; i<=5; i++){
   printf("Enter the number ");
   scanf("%d",&x);
   if(x<0){
     break;
   }else{
   sum += x;
   }
 }
 printf("The sum is %d ", sum);
  

return 0;
}
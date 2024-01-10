#include<stdio.h> 

 int main(){
   int x,sum = 0;

   for(int i=1; i<=5; i++){
     printf("Enter a number ");
     scanf("%d", &x);
     if(x<0){
       printf("You have enter negative number, please enter positive number...\n");
       continue;
     }
     sum += x;
   }

   printf("The sum is %d ", sum);

  

return 0;
}
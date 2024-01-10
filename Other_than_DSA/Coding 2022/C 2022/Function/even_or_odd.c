#include<stdio.h> 
void evenOdd(int x){
  if(x%2==0){
    printf("The number %d is even \n", x);
  }else{
    printf("The number %d is odd \n", x);
  }
}

 int main(){
int x;
printf("Enter a number \n");
scanf("%d",&x);
evenOdd(x);
  

return 0;
}
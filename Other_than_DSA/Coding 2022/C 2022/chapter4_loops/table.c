#include<stdio.h> 

 int main(){

int x;
  printf("Enter the number \n");
  scanf("%d", &x);

  for(int i = 1; i<=10; i++){
    printf("2 X %d = %d \n", i, i*x );
  }

return 0;
}
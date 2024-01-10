#include<stdio.h> 
int sum(){
  int a,b;
  printf("Enter two numbers \n");
  scanf("%d %d",&a,&b);

  // printf("Ye zindgi \n");
  return a+b;
}

 int main(){

// printf("The result is = %d", sum());

int result = sum();

printf("The result is = %d", result);

return 0;
}
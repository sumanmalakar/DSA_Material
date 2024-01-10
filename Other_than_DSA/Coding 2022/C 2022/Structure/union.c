#include<stdio.h> 
union abc{
  int a;
  char b;
  float c;
};

 int main(){

union abc u1;
union abc *ptr  = &u1;

u1.a = 1;
u1.b = '8';
u1.c = 98.3;
printf("a value is : %d \n", ptr->a);
printf("b value is : %c \n", ptr->b);
printf("c value is : %f \n", ptr->c);

return 0;
}
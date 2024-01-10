#include<stdio.h> 

 int main(){

int a = 10, b = 9;
int c;
int *p, *q;
p = &a;
q = &b;
c = *q;
*p = 20;

printf("value of a = %d \n",a); // 10
printf("value of a = %d \n", p); // 233453567
printf("value of a = %d \n", *p); // 10
printf("address of a = %x \n", &a); // 61fff34
printf("address of p = %d \n", &p); // 665785
printf("c = %d \n", c);
printf("value of a = %d \n", a);

return 0;
}
#include<stdio.h> 

 int main(){
   int a[] = { 2,4,3,0,-7};
   int *p = &a[0];
   int *q = &a[3];
   
   printf("p-q = %d \n", p-q);
   printf("q-p = %d \n", q-p);

   printf("value of q = %d \n",*q);
   q = q-2;
   printf("value of q = %d \n", *q);
   p = p+2;
   printf("q-p = %d \n", q-p); 
   q = q-2;
   printf("value %d ", *q);

   return 0;
}
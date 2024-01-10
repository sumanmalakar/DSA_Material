#include<stdio.h> 

 int main(){

  int a[] = {3,2,6,7,0,50};
  int *p;
  p = a; // &a[0]
  p++;
  printf("%d ", *p);
  printf("%d \n",*++p);//phle increment fir print
  printf("%d \n",*p++);//phle print fir increment
  printf("%d \n", *p);
  printf("%d %d \n",*p++, *p++); // right wala phle chalega
  p = &a[4];
  printf("%d ", *p--);
  printf("%d \n", *p);

  p = &a[2];
  printf("%d %d %d \n", *--p, *--p, *--p);

  return 0;
}
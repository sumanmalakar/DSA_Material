#include<stdio.h> 

 int main(){

  // int i = 34;
  // int *ptr = &i;
  // printf("The value of i is %u \n",ptr);
  // // ptr++; // int 4 byte ka hota hai
  // // ptr++;
  // // ptr++;
  // ptr--;

  // printf("The value of ptr is %u\n", ptr);

  // char i = '4';
  // char *ptr = &i;
  // printf("The value of i is %u \n", ptr);
  // // ptr++;
  // ptr++; // char 1 byte hota hai
  // // ptr++;
  // // ptr--;

  // printf("The value of ptr is %u\n", ptr);

  float i = 3.4;
  float *ptr = &i;
  printf("The value of i is %u \n", ptr);
  // ptr++;
  ptr++; // flaot 4 byte ka hota hai
  // ptr++;
  // ptr--;

  printf("The value of ptr is %u\n", ptr);

  return 0;
}
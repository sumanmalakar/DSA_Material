#include<stdio.h> 
int area(int r){
  return r*r;
}

 int main(){
int n;
printf("Enter the side of square \n");
scanf("%d", &n);

printf("The area is = %d", area(n));
  

return 0;
}
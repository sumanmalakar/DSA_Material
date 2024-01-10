#include<stdio.h> 
// Array is always pass by reference...

int avg(int arr[], int size){
  int i, sum = 0;
  for( i=0; i<size; i++){
    sum += arr[i];
  }
  return (sum/size);
}

 int main(){
   int size;
int marks[] = {99,96,95,92,78};
size = sizeof(marks)/sizeof(marks[0]);

printf("The avg is = %d \n", avg(marks, size));

printf("The avg is = %d", avg(marks,5));
  

return 0;
}
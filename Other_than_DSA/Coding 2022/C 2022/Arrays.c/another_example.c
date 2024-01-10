#include<stdio.h> 
// count the number of odd and even number in a array

 int main(){

  int a[10];
int even = 0, odd =0;
  for(int i=0; i<10; i++){
    printf("Enter the number %d  ", i);
    scanf("%d",&a[i]);
  }

  for(int i=0; i<10; i++){
    if(a[i]%2 == 0){
      even++;

    }else{
      odd++;
    }
  }
  printf("The total even = %d ", even);
  printf("\n The total odd = %d ", odd);

  return 0;
}
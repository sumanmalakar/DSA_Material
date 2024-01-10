#include<stdio.h> 

 int main(){

  int a[5];
  for(int i=0; i<5; i++){
  printf("Enter the element of %d ",i+1);
  scanf("%d",&a[i]);
}

printf("\n");
printf("Your enter elements are :- \n");
for (int i = 0; i < 5; i++)
{
  printf("%d ", a[i]);

}
return 0;
}
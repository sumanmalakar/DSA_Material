#include<stdio.h> 

 int main(){
   for(int i = 1; i<=20; i++)
{ 
   if (i >= 5 && i <= 15)
   {
     continue;
   }
   else
   {
     printf("%d ", i);
   }}

return 0;
}
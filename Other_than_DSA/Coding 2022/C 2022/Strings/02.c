#include<stdio.h> 

 int main(){

char name[30];
printf("Enter name \n");
scanf("%s",name);
printf("%.5s \n",name);
printf("%10.5s \n",name);
puts(name);
puts(name);
printf("%s",&name[2]);

return 0;
}
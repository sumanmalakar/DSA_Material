#include<stdio.h> 

int occurence(char name[], char c){
  int count = 0, i=0;
while(name[i]!='\0'){
if(name[i]==c){
  count++;
}
i++;
}
return count;
}

 int main(){

  char st[] =  "Harry7777";
  int count =  occurence(st,'7');

  printf("The occurence is = %d", count);

return 0;
}
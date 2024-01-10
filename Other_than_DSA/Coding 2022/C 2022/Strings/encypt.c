#include<stdio.h> 
//encypt function
void encypt(char name[]){
  int  i=0;
  while(name[i]!='\0'){
    name[i] += 30;
    i++;
  }
}

// decypt function 
void decypt(char name[])
{
  int i = 0;
  while (name[i] != '\0')
  {
    name[i] -= 30;
    i++;
  }
}
 int main(){
char name[30] = "suman malakar bro !";
encypt(name);
  printf("Encypted string is:    %s",name);
  printf("\n");
  decypt(name);
  printf("decypted string is:     %s", name);

  return 0;
}
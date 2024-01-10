#include<stdio.h> 
#include<string.h>

// predefine functoin is strcat(s1,s2) or strcat(s2,s1)

 int main(){
char s1[30] = "jenny";
char s2[7] = "khatri";
// char result[12];

// int i=0, j=0; 
// while(s1[i]!='\0'){
//   result[i] = s1[i];
//   i++;

// }

// while(s2[j]!='\0'){
//   result[i] = s2[j];
//   j++;
//   i++;
// }

strcat(s1,s2);
printf("%s",s1);


return 0;
} 
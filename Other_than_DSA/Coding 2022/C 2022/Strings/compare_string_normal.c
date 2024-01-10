#include <stdio.h>
#include <string.h>

// strcmp() is predefine function for comparing the two strings

int main()
{

  char s1[] = "Hello";
  char s2[] = "HeLlo1";

  int l1, l2, count = 0;
  l1 = strlen(s1);
  l2 = strlen(s2);

  if(l1!=l2){
    printf("Both string are not equal..\n");
  }else{
    for(int i=0; i<l1; i++){
      if(s1[i]!=s2[i]){
          count++;
          break;
      }
    }
    if (count != 0)
    {
      printf("Both string are not equal..\n");
    }else{
      printf("Both string are equal..\n");
    }
  }
  

  return 0;
}
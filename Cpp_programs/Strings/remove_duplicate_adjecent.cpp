#include<iostream> 

using namespace std; 

char * remove_duplicate(char str[]){
  int i, j;
  for (i = 0; str[i]!='\0'; i++)
  {
    if (str[i] == str[i + 1])
    {
      for (j = i; str[j]!='\0'; j++)
      {
        str[j] = str[j + 1];
      }
        i = i-1;
    }
  }
  return str;
}

 int main(){

  char str[] = "AABBCCDA";
  // int n = sizeof(str)/sizeof(int);
  
  cout<<remove_duplicate(str);
  

return 0;
}
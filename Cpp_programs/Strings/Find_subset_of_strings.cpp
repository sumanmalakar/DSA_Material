#include <iostream>
#include <string.h>
#include <string>
using namespace std;

char* find_subset(char str[], char find[])
{ int n = strlen(find);
  char modi[n];
  int i,j;
  for(i=0; find[i]; i++){
    for(j=0; j<str[j];j++){
      if(find[i]==str[j]){

      }
    }
  }


}

int main()
{ 
  // char str[] = "ram bazar jila jata jai!";
  // strlwr(str);
  // char find[] = "jata";
  // strlwr(find);


  //  find_subset(str, find);

  int j = 2;
  for(j; j<5; j++){
    cout<<j<<endl; 
    // break;
    // j= j+2;
  }
  return 0;
}
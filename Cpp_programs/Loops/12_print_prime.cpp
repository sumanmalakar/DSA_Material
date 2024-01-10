#include <iostream>

// program to print all prime numbers between two given number

using namespace std;

int main()
{

  int i,j, n = 10, m = 20;
  // cout<<"Enter a number \n";
  // cin>>n;

  for (i = n; i <=m; i++)
  {
    for(j=2; j<i; j++){
      if(i%j == 0){
        break;
      }
    }
      if(i == j){
        cout<<i<<"  ";
      }

  }


  return 0;
}

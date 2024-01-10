#include<iostream>
using namespace std; 

 int main(){

  int n;
  cout<<"Enter a number \n";
  cin>>n;
  int check = n;
  int arms = 0;
  while(n!=0){
    int temp = n%10;
    arms += temp*temp*temp;
    n = n/10;
  }
  if(arms == check){
    cout<<"The number "<<check<<" is Armstron number \n";
  }else{
    cout<<"Not a Armstron number \n";
  }

return 0;
}
#include<iostream>
using namespace std; 

void update1(int n){
   n++;
}

 // & = reference variable
void update2(int &n){
  n++;
}

 int main(){
/*
  int i = 10;

  // create a ref variable

  int & j = i;

  cout<<i<<endl;
  i++;
  cout<<i<<endl;
  j++;
  cout<<i<<endl;
  cout<<j<<endl;

*/
int n = 5;
cout<<"Before "<<n<<endl;
// update1(n);
update2(n);
cout<<"After "<<n<<endl;

return 0;
}
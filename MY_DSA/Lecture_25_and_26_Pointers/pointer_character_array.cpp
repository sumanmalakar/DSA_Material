#include <iostream>
using namespace std;

int main()
{

  int arr[5] = {1, 2, 3, 4, 5};
  char ch[6] = "abcde";

  cout << arr << endl; // first index ka address print hoga
  cout<<ch<<endl;

  char *c = ch;
  cout<<*c<<endl; // a
  cout<<*(c+1)<<endl; //b

  // prints entire string (attention here)
  cout<<c<<endl; // complete string print hoga

  char temp = 'z';
  char *p = &temp;

  cout<<"This is p = "<<p<<endl;

  return 0;
}
#include <iostream>

using namespace std;

int main()
{

  int a = 4, b = 6;

  cout << "a&b = " << (a & b) << endl; // and operation
  cout << "a|b = " << (a | b) << endl; // or operation
  cout << "~a = " << ~a << endl;       // not operation
  cout << "a^b = " << (a ^ b) << endl; // x-or operation

  // letft-shift
 
 int x = 15, y = 1;
  cout<<"leftShift x<<y = "<<(x<<y)<<endl;
  cout<<"rightShift x>>y ="<<(x>>y)<<endl;

  cout<<"leftShift = "<<(19<<1)<<endl;
  cout<<"leftShift = "<<(21<<2)<<endl;

  cout<<"rightShif = "<<(17>>1)<<endl;
  cout<<"rightShift = "<<(17>>2)<<endl;

  int i = 7;
  
  cout<<(++i)<<endl; // 8
  cout<<(i++)<<endl; //8 , i=9
  cout<<(i--)<<endl; //9, i=8
  cout<<(--i)<<endl; // 7


  return 0;
}
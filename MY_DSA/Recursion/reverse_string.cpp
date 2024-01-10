#include <iostream>
using namespace std;

void reverse(string &str, int s, int e)
{  
  cout<<"call recieved for "<<str<<endl; 

  // baseCase
  if (s > e)
    return;

  swap(str[s], str[e]);

  s++;
  e--;

  //Recursive Call
  reverse(str, s, e);
}

int main()
{

  string name = "12345";

  cout << name << endl;

  int length = name.length();

  reverse(name, 0, length - 1);

  cout << name << endl;

  return 0;
}
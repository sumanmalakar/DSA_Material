#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the No. \n";
  cin>>n;


  for (int i = 1; i <= n; i++)
  {
    cout << i << endl;
  }

  // for reverse

cout<<"This is reverse order\n";
  for (int i = n; i >= 1; i--)
  {
    cout << i << endl;
  }
}
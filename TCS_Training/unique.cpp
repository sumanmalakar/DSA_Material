#include <iostream>
using namespace std;

int main()
{

  int low = 10, high = 15;

  int count = 0;
  // cout<<"Hello";

  for (low; low <= high; low++)
  {
    int temp1 = 0;
    int temp2 = 0;
    int c = 1;
    int b = low;
    while (b != 0)
    {
      if (c == 1)
      {
        temp1 = b % 10;
        // cout<<temp1<<" ";
      }
      else if (c == 2)
      {
        temp2 = b % 10;
        // cout << temp2 << " ";
      }
      b = b / 10;
      c++;
    }
    if (temp1 != temp2)
    {
      count++;
    }
  }
  cout << count;

  return 0;
}
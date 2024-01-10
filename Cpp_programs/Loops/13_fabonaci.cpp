#include <iostream>

using namespace std;

void fab(int n){
  int i, a, b, c;
  a = 0, b = 1;
  for (i = 1; i <= n; i++)
  {
    if (i == 1)
    {
      cout << i - 1 << " ";
    }
    if (i == 2)
    {
      cout << i - 1 << " ";
    }
    if (i > 2)
    {
      // a = 0, b = 1;
      c = a + b;
      a = b;
      b = c;
      cout << c << " ";
    }
  }
}
int main()
{ int n;
  cout << "Enter a number \n";
  cin >> n;
  fab(n);
  return 0;
}
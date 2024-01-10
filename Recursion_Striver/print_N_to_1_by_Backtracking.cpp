#include <iostream>
using namespace std;

void print(int i, int n)
{
  if (i > n)
    return;
  print(i + 1, n);
  cout << i << " ";
}

int main()
{
  int n;
  cout << "Enter a number \n";
  cin >> n;
  print(1, n);

  return 0;
}
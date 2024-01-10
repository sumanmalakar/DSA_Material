#include <iostream>
using namespace std;

void count(int n)
{
  if (n == 0)
    return;

  count(n - 1); // head recursion

  cout << n << " ";
}

int main()
{

  int n;
  cout << "Enter a number \n";
  cin >> n;

  count(n);

  return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> prime;
  int i = 2, j = 2;
  for (i; i <= 1000; i++)
  {
    for (j; j < i; j++)
    {
      if (i % j == 0)
      {
        break;
      }
    }
    if (j == i)
    {
      prime.push_back(i);
      j = 2;
    }
  }

  for (int x : prime)
  {
    cout << x << " ";
  }

  return 0;
}
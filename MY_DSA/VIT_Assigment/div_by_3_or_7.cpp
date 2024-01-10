#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> result;

  for (int i = 1; i <= 1000; i++)
  {
    if ((i % 3 == 0) || (i % 7 == 0))
    {
      result.push_back(i);
    }
  }

  for (int x : result)
  {
    cout << x << " ";
  }

  return 0;
}
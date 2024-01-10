#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> perfect;
  vector<int> result;

  for (int i = 1; i <= 500; i++)
  {
    for (int j = 1; j < i; j++)
    {
      if (i % j == 0)
      {
        perfect.push_back(j);
      }
    }
    int sum = 0;
    for (int x : perfect)
    {
      sum += x;
    }
    perfect.clear();

    if (sum == i)
    {
      result.push_back(i);
    }
  }

  for (int y : result)
  {
    cout << y << " ";
  }

  return 0;
}
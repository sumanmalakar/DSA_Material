#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n, t;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    v.push_back(t);
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}
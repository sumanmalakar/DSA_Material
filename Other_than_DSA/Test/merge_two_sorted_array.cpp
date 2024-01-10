#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
  int m = arr1.size();
  int n = arr2.size();
  int i = 0, j = 0;
  while (i < m)
  {
    if ((arr1[i] < arr2[j]) && n != 0)
    {
      arr3.push_back(arr1[i]);
      i++;
    }
    if ((arr1[i] > arr2[j]) && n != 0)
    {
      arr3.push_back(arr2[j]);
      n--;
      j++;
    }
    if (n == 0)
    {
      arr3.push_back(arr1[i]);
      i++;
    }
  }
}

int main()
{
  vector<int> arr1 = {2, 3, 5, 7, 8, 10};
  vector<int> arr2 = {1, 4, 6, 9};
  vector<int> arr3;
  merge(arr1, arr2, arr3);

  for (int i = 0; i < arr3.size(); i++)
  {
    cout << arr3[i] << " ";
  }

  return 0;
}
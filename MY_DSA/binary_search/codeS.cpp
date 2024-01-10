#include <bits/stdc++.h>
using namespace std;

int min_el(vector<int> &arr)
{
  int n = arr.size();
  int s = 0, e = n - 1;
  int pr = 0, nx = 0;
  int mid = 0;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    pr = (mid + 1) % n;
    nx = (mid - 1 + n) % n;
    if ((arr[mid] < arr[pr]) && (arr[mid] < arr[nx]))
    {
      return mid;
    }
    else if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
  return mid;
}

int b_s(vector<int> &arr, int s, int e, int target)
{
  int mid = -1;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    if (arr[mid] == target)
    {
      return mid;
    }
    else if (arr[mid] > target)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return -1;
}

int main()
{

  vector<int> arr = {7, 9, 1, 2, 3};
  int k = 2;
  int index = min_el(arr);
  cout << "min element index = " << index << endl;
  int first = b_s(arr, 0, index - 1, k);
  int second = b_s(arr, index + 1, arr.size() - 1, k);
  cout << "first  = " << first << endl;
  cout << "second  = " << second << endl;

  if (arr[index] == k)
  {
    cout << "from index = " << index;
  }
  else
  {
    if (first >= 0)
    {
      cout << "first = " << first << endl;
    }
    else
    {
      cout << "second = " << second << endl;
    }
  }

  return 0;
}
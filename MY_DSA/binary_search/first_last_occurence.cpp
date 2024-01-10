#include <bits/stdc++.h>
using namespace std;

// first and last occurence of element in a sorted array...
// [2,4,5,8,8,8,9] target = 8, output = (3,5)

int first_and_last(int arr[], int n, int key, bool index)
{
  int s = 0, e = n - 1;
  int occurence = -1;
  while (s <= e)
  {
    int mid = s + (e - s) / 2;
    if (index)
    {
      if (arr[mid] == key)
      {
        occurence = mid;
        e = mid - 1;
      }
      else if (arr[mid] > key)
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }else{
      if (arr[mid] == key)
      {
        occurence = mid;
        s = mid + 1;
      }
      else if (arr[mid] > key)
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
  }
  return occurence;
}

int main()
{
  int arr[] = {3, 5, 8, 8, 8, 9, 34};
  int n = 7;
  int target = 8;
  int first_position = first_and_last(arr, n, target, true);
  int last_position = first_and_last(arr, n, target, false);

  cout << "fist ocuurence = " << first_position << endl;
  cout << "last ocuurence = " << last_position << endl;

  return 0;
}
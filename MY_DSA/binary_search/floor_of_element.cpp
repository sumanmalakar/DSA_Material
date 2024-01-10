#include <iostream>
using namespace std;

int floor_of_element(int arr[], int n, int k)
{
  int s = 0, e = n - 1;
  int mid = 0, result = 0;

  while (s <= e)
  {
    mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
      return mid;
    }
    else if (arr[mid] < k)
    {

      result = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }
  return result;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 7, 10, 12, 16, 19};
  int n = sizeof(arr) / sizeof(arr[0]);

  int target = 6; // find floor of 10.
  int floor = floor_of_element(arr, n, target);

  cout << "floor of " << target << " is = " << arr[floor];

  return 0;
}
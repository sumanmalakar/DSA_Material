#include <iostream>
using namespace std;
// Find element in roated sorted array..

int no_of_time_roated(int arr[], int n)

{
  int s = 0, e = n - 1;
  int next = 0, prev = 0, mid = 0;

  while (s <= e)
  {
    mid = s + (e - s) / 2;
    next = (mid + 1) % n;
    prev = (mid - 1 + n) % n;

    if (arr[mid] < arr[prev] && arr[mid] < arr[next])
    {
      return mid;
    }
    else if (arr[mid] >= arr[0])
    {
      s = mid + 1;
    }
    else if (arr[mid] <= arr[e])
    {
      e = mid - 1;
    }
  }
  return mid;
}

int binary_search(int arr[], int s, int e, int key)
{
  int index = -1;
  int mid = 0;

  while (s <= e)
  {
    mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
      index = mid;
      break;
    }
    if (arr[mid] > key)
    {
      e = mid - 1;
    }
    else
    {
      s = mid + 1;
    }
  }
  return index;
}

int main()
{
  int arr[] = {2, 5, 6, 0, 0, 1, 2};

  int n = sizeof(arr) / sizeof(arr[0]);

  int target = 0;
  int index = no_of_time_roated(arr, n);
  cout<<"min_element_index = "<<index<<endl;

  if (arr[index] == target)
  {
    cout << "element of  index = " << index;
  }
  else
  {

    int first = binary_search(arr, 0, index - 1, target);
    int second = binary_search(arr, index + 1, n - 1, target);

    if (first >= 0)
    {
      cout << "element of  index = " << first;
    }
    else
    {
      cout << "element of index = " << second;
    }
  }

  return 0;
}
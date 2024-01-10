#include <bits/stdc++.h>
using namespace std;

// count element in sorted Array 
// first occurence find & last occurence find kar 
// no_of_element = last - first +1;

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
      else if (arr[mid] > key )
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    else
    {
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
  int arr[] = {1,2,3,4,5,6,7,8,9,12,12,12,12,12,20,20,20,23,34,34,35,36,67,90,90,90,99,99,100,100,100,100,100,100,100,100};
  
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 100;
  int first_p = first_and_last(arr, n, target, true);
  int last_p = first_and_last(arr, n, target, false);

  cout << "first ocuurence = " << first_p << endl;
  cout << "last ocuurence = " << last_p << endl;

  // no of element
  // last_p - first_p +1;

  cout << "No. of element = " << (last_p - first_p + 1) << endl;

  return 0;
}
#include <iostream>
using namespace std;

// Number of times a sorted array is roated ( find smallest element in roated sorted array )
// 1) smallest element ka index find kar , utne time roated hai. {( mid<mid-1) && (mid<mid+1) }
// 2) jo smallest element hoga vo apne left && right dono se chhota hoga.
// 3) jo part alredy sorted vha smallest element nhi milega.
// 4) Unsortd part me smallest element ka index find kar.
// 5) code ko dry run kar sab samjh aa jayega.

int no_of_time_roated(int arr[], int n)
{
  int s = 0, e = n - 1;
  int prev = 0, next = 0;
  int roate = 0;
  while (s <= e)
  {

    int mid = s + (e - s) / 2;
    next = (mid + 1) % n;
    prev = (mid - 1 + n) % n;

    if (arr[mid] < arr[next] && arr[mid] < arr[prev])
    {
      roate = mid;
      break;
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
  return roate;
}

int main()
{
  int arr[] = {12, 14, 15, 2, 3, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int times = no_of_time_roated(arr, n);

  cout << "No of time roatation =  " << times << endl;

  return 0;
}
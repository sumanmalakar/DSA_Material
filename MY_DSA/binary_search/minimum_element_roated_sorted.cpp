#include<iostream>
using namespace std;

int minimum_element(int arr[], int n)

{
  int s = 0, e = n - 1;
  int next = 0, prev = 0, mid = 0;
  if(arr[0]<arr[e]){
    return s;
  }
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    next = (mid + 1) % n;
    prev = (mid - 1 + n) % n;

    if (arr[mid] < arr[prev] && arr[mid] <= arr[next])
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

 int main(){
   int arr[] = { 10, 1, 10, 10, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);

   int min = minimum_element(arr, n);

   cout<<"index = "<<min<<" minimum_element = "<<arr[min];

   return 0;
}
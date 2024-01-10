#include <iostream>
using namespace std;

void swap_alternate(int arr[], int n)
{
  int start = 0;
  int end = 1;

  while (end < n)
  {
    swap(arr[start], arr[end]);
    start = start + 2;
    end = end + 2;
  }
}

int main()
{
  int arr[] = {1, 2, 7, 8, 5};
  int n = 5;
  swap_alternate(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
  int mid = (s + e) / 2;

  int len1 = mid - s + 1; // left part length
  int len2 = e - mid;     // right part length

  // left aur right part ke liye 2 dynamic array create kiya
  int *first = new int[len1];
  int *second = new int[len2];

  // copy values in arrays
  int mainArrayIndex = s;
  for (int i = 0; i < len1; i++)
  {
    first[i] = arr[mainArrayIndex++];
  }

  mainArrayIndex = mid + 1;
  for (int i = 0; i < len2; i++)
  {
    second[i] = arr[mainArrayIndex++];
  }

  // merge 2 sorted arrays
  int index1 = 0;
  int index2 = 0;
  mainArrayIndex = s;

  while (index1 < len1 && index2 < len2)
  {
    if (first[index1] < second[index2])
    {
      arr[mainArrayIndex++] = first[index1++];
    }
    else
    {
      arr[mainArrayIndex++] = second[index2++];
    }
  }

  while (index1 < len1)
  {
    arr[mainArrayIndex++] = first[index1++];
  }

  while (index2 < len2)
  {
    arr[mainArrayIndex++] = second[index2++];
  }
}

void mergeSort(int *arr, int s, int e)
{

  // baseCase
  if (s >= e)
    return;

  int mid = (s + e) / 2;

  //left part sort karna h
  mergeSort(arr, s, mid);

  //right part sort karna h
  mergeSort(arr, mid + 1, e);

  // merge array
  merge(arr, s, e);
}

int main()
{

  int arr[6] = {3, 7,23, 12, 15, 19};

  int n = 6;
  int start = 0;
  int end = n - 1;

  mergeSort(arr, start, end);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
  int pivot = arr[s];

  int count = 0;
  for (int i = s+1; i <= e; i++)
  {
    if (pivot >= arr[i])
    {
      count++;
    }
  }

  // pivot ko uske sahi(right) place par daala
  int pivotIndex = s + count;
  swap(arr[s], arr[pivotIndex]);


// left and right wala part manage  karte hai
  int i = s, j = e;

  while (i < pivotIndex && j> pivotIndex)
  { 
    while(arr[i]<= pivot){
      i++;
    }

    while(arr[j]> pivot){
      j--;
    }

    if (i < pivotIndex && j > pivotIndex)
    {
      swap(arr[i], arr[j]);
      i++;
      j--;
    }
  
  }

  return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
  //baseCase
  if (s >= e)
    return;

  int p = partition(arr, s, e);

  //Rec Case

  //left wala part sort kar
  quickSort(arr, s, p - 1);

  //right wala part sort kar 
  quickSort(arr, p + 1, e); 
}

int main()
{
  int arr[5] = {4 ,2 ,5 ,1, 3};
  int n = 5;

  quickSort(arr, 0, n - 1);

  for (int x : arr)
  {
    cout << x << " ";
  }

  return 0;
}
#include <iostream>
using namespace std;

void bubble_sor(int arr[], int n)
{
  int i, j, temp;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{

  int arr[] = {2,1,8,-3,6,4,12};
  // int arr[] = {3, 2, -1, 5, 4, -3, 6, 4 , 8,9, 10 , 11, 12};
  int i, j, n;
  n = sizeof(arr) / sizeof(int);
  bubble_sor(arr, n);
  // for (i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  for(int item: arr){
      cout << item << " ";
  }

  return 0;
}
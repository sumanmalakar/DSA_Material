#include <iostream>
using namespace std;

int main()
{

  int arr[] = {1,0,1,2,0,2};
  int n = 6;

  int i = 0, j = 0, k = n-1;
  while (i<=k)
  {
    if (arr[i] == 0)
    {
      swap(arr[i],arr[j]);
      i++; j++;
    }
    else if (arr[i] == 1)
    {
      i++;
    }
    else if (arr[i] == 2)
    {
      swap(arr[i], arr[k]);
      k--;
    }
  }

  for (int i : arr)
  {
    cout << i << " ";
  }

  return 0;
}
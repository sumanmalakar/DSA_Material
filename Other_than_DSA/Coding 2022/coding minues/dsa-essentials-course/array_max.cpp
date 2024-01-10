#include <iostream>
using namespace std;

void max(int arr[], int n, int *maxi)
{

  *maxi = arr[0];
  for (int i = 1; i <= n; i++)
  {
    if (*maxi < arr[i])
    {
      *maxi = arr[i];
    }
  }
  // return *maxi;
  //  cout<<"the"<<maxi;
}

int main()
{
  int arr[] = {10, 45, 3, 78, 9};
  int max;
  int n = sizeof(arr) / sizeof(int);
     max(arr, n, &max);
  cout << max;

  return 0;
}
// this is pepcoding youtube channel approach
#include <iostream>
using namespace std;

//Sort the elements in increasing order
void insertion_sort(int a[], int n)
{

  for (int i = 1; i <= n - 1; i++)
  {
    for(int j = i -1; j>=0; j--){
      if(a[j]>a[j+1])
      { swap(a[j], a[j+1]);
      }
      else{
        break;
      }
    }
}
}

int main()
{
  int arr[] = {2,9,5,1,3};
  int n = sizeof(arr) / sizeof(int);
  insertion_sort(arr, n);

  for (auto x : arr)
  {
    cout << x << " ";
  }

  return 0;
}
#include <iostream>
using namespace std;

void print(int arr[], int s, int e){
  for(int i=s; i<=e; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int binarySearch(int arr[], int s, int e, int key)
{ 
  // cout<<endl;
  print(arr,s,e);
  // baseCase
  if (s > e)
    return -1;

  int mid = s + (e - s) / 2;

  cout<<"value of arr mid is = "<<arr[mid]<<endl;

//element found
  if (arr[mid] == key)
  {
    return mid;
  }
   if (arr[mid] > key)
  { 
    e = mid - 1;
    // binarySearch(arr,s, mid-1, key);
  }
  else
  {
    s = mid+1;
    // binarySearch(arr,mid+1,e,key);
  }

 return binarySearch(arr, s, e, key);
}

int main()
{

  int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
  int s = 0;
  int e = 10;
  int key = 222;

  int n = binarySearch(arr, s, e, key);

  cout << key << " at index " << n << endl;

  return 0;
}
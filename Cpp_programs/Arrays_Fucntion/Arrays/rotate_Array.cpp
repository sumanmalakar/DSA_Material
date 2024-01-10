#include <iostream>
using namespace std;

// Program to rotate an array by n positions in Cpp

// rotate_from_right
void right_Rotate(int arr[], int n){
  int temp ;
  temp = arr[n-1];
  for(int i= 1; i<=n; i++){
    arr[n-i] = arr[n-i-1];
  }
  arr[0] = temp;
}

// rotate_from_left
void left_Rotate(int arr[], int n)
{
  int temp;
  temp = arr[0];
  for (int i = 0; i < n; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[n-1] = temp;
}

int main()
{
  int n;
  cout << "Enter the size of array\n";
  cin >> n;
  int arr[n];
  cout << "Enter the element of array\n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout<<"Rotate_From_right\n";
  right_Rotate(arr,n);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
cout<<endl;
  cout<<"Rotate_From_left\n";
  left_Rotate(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
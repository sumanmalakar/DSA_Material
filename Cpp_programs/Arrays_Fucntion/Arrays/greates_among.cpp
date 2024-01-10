#include<iostream> 
using namespace std; 

// Write a program to find greatest among 10 numbers

int greatest(int arr[], int n){
  int max = arr[0];
  for(int i =0; i<n; i++){
    if(max<arr[i]){
      max = arr[i];
    }
  }
  return max;
}
int least(int arr[], int n)
{
  int min = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  return min;
}

 int main(){
   int n;
   cout << "Enter the size of array\n";
   cin >> n;
   int arr[n];
   cout << "Enter the element of array\n";
   for (int i = 0; i < n; i++)
   {
     cin >> arr[i];
   }
   cout<<"The greatest value is "<<greatest(arr, n)<<endl;
   cout << "The least value is " << least(arr, n);

   return 0;
}
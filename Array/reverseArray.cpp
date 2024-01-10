#include<iostream>
using namespace std;

void reverse(int arr[], int s){
  for(int i=0; i<s/2; i++){
    int temp = arr[i];
    arr[i] = arr[s-i-1];
    arr[s-i-1] = temp;
  }
}

void reverse_2(int arr[], int s){
  int start = 0;
  int end = s-1;
  while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
 int main(){

   int arr[] = {1,4,0,5,-2,15};
  
  int n = 6;
  //  reverse(arr, n);

  reverse_2(arr,n);

   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }

  

return 0;
}
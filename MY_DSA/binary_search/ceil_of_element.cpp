#include<iostream>
using namespace std; 

int ceil_of_element(int arr[], int size, int key){
  int s = 0, e = size - 1;
  int  mid = 0;
  int result = 0;

  while(s<=e){
    mid = s+(e-s)/2;

    if(arr[mid]==key){
      return mid;
    }else if(arr[mid]<key){
      s = mid+1;
    }else{
      result = mid;
      e = mid-1;
    }
  }
  return result;
}

 int main(){
int arr[] = {1,2,3,4,9,10,12,15,19 };
int n = sizeof(arr)/sizeof(arr[0]);

int target = 16;
int ceil = ceil_of_element(arr, n , target);

cout<<"ceil of "<<target<<" is = "<< arr[ceil];

return 0;
}
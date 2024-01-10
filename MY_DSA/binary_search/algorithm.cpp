#include<iostream>
using namespace std; 

int binary_search(int arr[], int size, int key){
  int s = 0, e = size - 1;
  while(s<=e){
  
  int mid = s + (e-s)/2;

    if(arr[mid]==key){
      return mid;
    }else if(arr[mid]>key){
      e = mid - 1;
    }
    else{
      s = mid+1;
    }
  }
  return -1;
}

 int main(){

// int arr[] = { 1,4,57,90,450,8900};
int arr[] = {2,4,6,8,12,18};
int odd[] = {3,8,11,14,16};

int key = 12;
int n = 6;
cout << "indexOdd = " << binary_search(odd, 5, 14);
cout<<endl;
cout<<"index = "<<binary_search(arr,n,key);  

return 0;
}
#include<iostream>
using namespace std; 

bool sorted_check(int arr [], int size){
  if(size == 0 || size == 1)return true;

  if(arr[0]>arr[1])return false;

 
 return sorted_check(arr+1,size-1);


}

 int main(){

  int arr [] = {2,4,6,9,13,13};

  if(sorted_check(arr,6)){

cout<<"Array is sorted\n";
  }else{
    cout<<"Array is UnSorted\n";
  }

return 0;
}
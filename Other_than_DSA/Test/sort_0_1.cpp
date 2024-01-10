#include<iostream>
using namespace std; 

 int main(){

int arr[] = {1,0,1,0,0,1};
// int arr[] = {0,1,0,0,1,1,1,0,1 };
// int arr[] = {1,0,1,2,0,2};
int n = 6;

int i=0, j=1;
while(j<n){
  if(arr[i]==0){
    i++;
  }
  else if(arr[j]==1){
    j++;
  } else if(arr[j]==0){
    swap(arr[i],arr[j]);
    i++;
    j++;
  }
}
  
  for(int i:arr){
    cout<<i<<" ";
  }

return 0;
}
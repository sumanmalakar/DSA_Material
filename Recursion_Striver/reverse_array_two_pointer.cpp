#include<bits/stdc++.h>
using namespace std; 

void reverse(int arr[] , int s, int e){
  if(s>=e)return;

  swap(arr[s], arr[e]);
  reverse(arr, s+1, e-1);
}

 int main(){
   int arr[] = {1,5,6,2,7};
   reverse(arr, 0, 4);

   for(int element : arr){
     cout<<element<<" ";
   }

  

return 0;
}
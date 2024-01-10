#include<bits/stdc++.h>
using namespace std; 

void reverse(int i, int arr [], int n){
  if(i>=n/2)return;

  swap(arr[i], arr[n-i-1]);

  reverse(i+1, arr, n);
}

 int main(){
   int n;
   cout<<"Enter the length of array "<<endl;
   cin>>n;
   cout<<"Enter the element of array "<<endl;
   int arr[n];
   for(int i=0; i<n; i++) cin>> arr[i];

   for (int element : arr)
   {
     cout << element << " ";
   }
   cout<<endl;
  reverse(0,arr,n);

  for(int element: arr){
    cout<<element<<" ";
  }

return 0;
}
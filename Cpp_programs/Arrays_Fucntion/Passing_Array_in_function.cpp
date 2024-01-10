#include<iostream> 
using namespace std; 

// Passing the Array into a function

int avg(int marks[], int size){
   int sum = 0;
   for(int i= 0; i<size; i++){
     sum = sum + marks[i];
   }
  return sum/size;
}

 int main(){
int arr[] = {99,96,78,92,95};
int n = sizeof(arr)/sizeof(int);
cout<<avg(arr,n);
  

return 0;
}
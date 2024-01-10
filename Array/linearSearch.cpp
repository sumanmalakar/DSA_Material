#include<iostream>
using namespace std; 

bool linear_search(int arr[], int key, int s){
  
  for(int i=0; i<s; i++){
    if(key==arr[i]){
          return true;
    }
  }
  return false;

}
 int main(){

int arr[10] = {5,7,-2,10,22,-2,0,5,22,1};
int n;
cout<<"Enter the key \n";
cin>>n;

if(linear_search(arr,n,10)){
  cout<<"element is present\n";
}
else{
  cout<<"element is not present\n";
}
  

return 0;
}
 #include<iostream>
 using namespace std; 

 void print(int arr[], int n){
   cout<<"Size of array is "<<n<<endl;

   for(int i=0; i<n; i++){
     cout<<arr[i]<<" ";
   }
   cout<<endl;
 }

 bool linear_search(int *arr, int size, int key){
   print(arr,size);
   if(size==0){
     return 0;
   }
   if(arr[0]==key)return true;

   return linear_search(arr+1, size-1, key);
 }
 
  int main(){
 
   int arr[5] = {3,5,1,2,6};
   int size = 5;
   int key = 5;

  if (linear_search(arr, size, key) )
  {
    cout<<"key is present  \n";
  }else{
    cout<<"key is not present \n";
  }

       return 0;
 }
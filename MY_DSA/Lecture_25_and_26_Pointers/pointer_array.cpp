#include<iostream>
using namespace std; 

 int main(){

  //  int arr[10] = {2,5,6,10,12,15,17,20,23,56};

   /*
   cout<<" address of first memory block is "<<arr<<endl;
   cout<<"address of first memory block is "<<&arr[0]<<endl;

//  arr = &arr[0] , dono same hote hai 

// arr, fist index ko point karta hai

cout<< "element at index 0 is = "<<*arr<<endl;
cout<<"element at index 1 is = "<<*(arr+1)<<endl;
cout<<"increment by 2 in index 0 , (2 -> 2+2 = 4) "<<*arr + 2<<endl;
cout << "increment by 3 in index 1 , (5 -> 5+2 = 7) " << *(arr+1)+ 2 << endl;

cout << "loop start from bellow :- \n";
for(int i=0; i<10; i++){
  cout<<"element at index "<<i+1<<" is = "<<*(arr+i)<<endl;
}


// same hai dono -> arr[i] = *(arr + i)

// i[arr] = *(i+arr) , sahi hai error nahi aayega


for(int i=5; i<10; i++){
  cout<<"element = "<<i[arr]<<endl;
}



int temp[10] = {1,2};
cout<<sizeof(temp)<<endl;

cout<<" 1st "<<sizeof(*temp)<<endl;
cout<<" 2nd "<<sizeof(&temp)<<endl;

int *ptr = &temp[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;




int a[20] = {1,2,3,5};
cout<<&a[0]<<endl;
cout<<&a<<endl;
cout<<a<<endl;

cout<<endl;
int *p = &a[0];
cout<<p<<endl; // Hexa
cout<<*p<<endl; // 1
cout<<&p<<endl; // Hexa

*/

int arr[10];

//ERROR
//  arr = arr+1;

int *ptr = &arr[0];
cout << ptr << endl; 
ptr = ptr + 1; // int 4 byte ka hota hai to 4 increase ho jayega 
cout<<ptr<<endl;



   return 0;
}
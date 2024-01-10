#include<iostream>
using namespace std; 

void print(int *p){
  cout<<p<<endl;
  cout<<*p<<endl;
}

void update(int *p){
  // p = p+1;
  // cout<<"inside function "<<p<<endl;


  *p = *p + 1;
}

int getSum_by_pointer(int arr[], int n){

  int sum = 0;
  int *ptr = arr;
  for(int i=0; i<n; i++){
    sum += *(ptr+i);
    // sum += i[arr]; // isme v sahi ans aayega
  }
return sum;
}

 int main(){

/*
  int value = 5;

  int *p = &value;

  print(p);

cout<<"Before "<<p<<endl;
  update(p);
  cout << "After " << p << endl;

  cout << "Before " << *p << endl;
  update(p);
  cout << "After " << *p << endl;

*/
  int arr[6] = {1,2,3,4,5,6};

  cout<<"Sum is  = "<<getSum_by_pointer(arr , 6)<<endl;
  cout << "Sum is  = " << getSum_by_pointer(arr +3, 3) << endl;

  return 0;
}
#include <iostream>
using namespace std;

// Write a program to calculate sum of all even numbers and sum of all odd numbers. Numbers are entered through keyboard and stored in an array

void even_Odd_Sum(int arr[], int size){
  int sumEven = 0, sumOdd = 0;
  for(int i=0; i<size; i++){
      if(arr[i]%2 == 0){
        sumEven = sumEven + arr[i];
      }
      else{
        sumOdd = sumOdd + arr[i];
      }
  }
  cout<<"Sum_even = "<<sumEven<<endl;
  cout << "Sum_odd = " << sumOdd<< endl;
}

// return two value(sumEven and sumOdd)

void even_Odd_Sum(int arr[], int size, int *sumEven, int *sumOdd)
{
  int Even_sum = 0, Odd_sum = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      Even_sum = Even_sum + arr[i];
    }
    else
    {
      Odd_sum = Odd_sum + arr[i];
    }
  }
  
  *sumEven = Even_sum;
  *sumOdd = Odd_sum;

}

int main()
    {
      int n , sum_Even, sum_Odd;
      cout<< "Enter the size of array\n";
      cin>> n;
      int arr[n];
      cout<< "Enter the element of array\n";
      for (int i = 0; i < n; i++)
      {
        cin>> arr[i];
      }
      even_Odd_Sum(arr, n, &sum_Even, &sum_Odd);

      cout<<"Even element sum is "<<sum_Even<<endl;
      cout << "Odd element sum is " << sum_Odd<<endl;

      return 0;
}
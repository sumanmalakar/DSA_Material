#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int k, int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == k)
      {
        return true;
      }
    }
  }
  return false;
}

void print_row_wise_sum(int arr[][4], int row, int col)
{
  int sum;
  for (int i = 0; i < row; i++)
  {
    sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j];
    }
    cout << i + 1 << " row sum = " << sum << endl;
  }
}

void print_column_wise_sum(int arr[][4], int row, int col)
{
  int sum;
  for (int col = 0; col < 4; col++)
  {
    sum = 0;
    for (int row = 0; row < 3; row++)
    {
      sum += arr[row][col];
    }
    cout << col + 1 << " col sum = " << sum << endl;
  }
}

int largest_Row_Sum(int arr[][4], int row, int col)
{
  int sum, resultSum = 0, result = 0;
  for (int i = 0; i < row; i++)
  {
    sum = 0;
    for (int j = 0; j < col; j++)
    {
      sum += arr[i][j];
    }
    if (resultSum < sum)
    {
      resultSum = sum;
      result = i;
    }
    cout<<"rowSum = "<<sum<<" "<<"resultSum = "<<resultSum<<endl;
  }
  return result + 1 ;
}

int main()
{

  // create 2 d array
  int arr[3][4];

  /* int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12 };
   int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}}; */

  //taking input => row wise input
  cout << "Enter elements of array .....\n";
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 4; col++)
    {
      cin >> arr[row][col];
    }
  }

  /* taking input => column wise input
   cout<<"Enter elements of array .....\n";
  for (int col = 0; col < 4; col++)
  {
    for (int row = 0; row < 3; row++)
    {
      cin >> arr[row][col];
    }
  }

  */

  //print
  cout << "Your output array......\n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  print_row_wise_sum(arr, 3, 4);
  cout << endl;
  print_column_wise_sum(arr, 3, 4);

  int largest_row = largest_Row_Sum(arr, 3, 4);

  cout << "largest row = " << largest_row << endl;

/*
  cout << "Enter the element to search " << endl;
  int target;
  cin >> target;

  if (isPresent(arr, target, 3, 4))
  {
    cout << "Element found " << endl;
  }
  else
  {
    cout << "Not found " << endl;
  }

*/
  return 0;
}
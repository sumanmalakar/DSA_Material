#include <iostream>
using namespace std;

int getSum(int arr[], int n)
{
  static int sum = 0;
  if (n == 0)
  {
    return sum;
  }

  sum += arr[0];

  return getSum(arr + 1, n - 1);

  // int result = getSum(arr + 1, n - 1);
  // return result;
}

int main()
{

  int arr[5] = {10, 20, 30, 40, 50};
  int size = 5;

  int sum = getSum(arr, size);

  cout << "sum is equal to = " << sum << endl;

  return 0;
}
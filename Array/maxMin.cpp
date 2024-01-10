#include <iostream>
using namespace std;

void four_in_one(int arr[], int *maxi, int *mini, int size, int *sum, int *avg)
{
  *maxi = arr[0];
  *mini = arr[0];
  *sum = arr[0];
  *avg = 0;

  for (int i = 1; i < size; i++)
  {
    *maxi = max(*maxi, arr[i]);
    *mini = min(*mini, arr[i]);
    *sum += arr[i];
  }
  *avg = *sum / size;
}

int main()
{
  int arr[6] = {10, -30, 20, 30, -42, 90};
  int max, min, sum = 0, avg = 0;
  four_in_one(arr, &max, &min, 6, &sum, &avg);
  cout << "max = " << max << endl
       << "min = " << min << endl
       << "sum = " << sum << endl
       << "avg = " << avg << endl;

  return 0;
}
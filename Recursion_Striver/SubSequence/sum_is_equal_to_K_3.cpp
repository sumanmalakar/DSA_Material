// how many subsequence are there in the subsequence there sum is equal to k
// arr -> {1,2,1} sum = 2
// we hava {1,1} {2}
// ouptut = 2

// arr -> {1,2,3,0} sum = 3
// we have {1,2} {3} {3,0}
// output = 3

#include <bits/stdc++.h>
using namespace std;

int sum_equals_to_K(int index, int arr[], int sum, int k, int n)
{
  if (index == n)
  {
    // condition satisfied
    if (sum == k)
    {
      return 1;
    }

    // condition not satisfied
    return 0;
  }

  // take or pick the particular index into the subsequence

  sum += arr[index];

  int left = sum_equals_to_K(index + 1, arr, sum, k, n);

  sum -= arr[index];

  // not pick, or not take codition, this element is not added to your subsequence

  int right = sum_equals_to_K(index + 1, arr, sum, k, n);

  return left + right;
}

int main()
{
  int arr[] = {1, 2, 1};
  int n = 3;
  int k = 2;

  cout << sum_equals_to_K(0, arr, 0, k, n);
}

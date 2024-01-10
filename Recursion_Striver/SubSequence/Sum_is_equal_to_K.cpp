// arr -> {1,2,1} sum = 2
// ouput {1,1} {2}

// arr -> {1,2,3,0} sum = 3
// output {1,2} {3} {3,0}

#include <bits/stdc++.h>
using namespace std;

void sum_equals_to_K(int index, vector<int> &ds, int arr[], int sum, int k, int n)
{
  if (index == n)
  {
    if (sum == k)
    {

      for (auto element : ds)
      {
        cout << element << " ";
      }
      cout << endl;
    }

    return;
  }

  // take or pick the particular index into the subsequence
  ds.push_back(arr[index]);
  sum += arr[index];

  sum_equals_to_K(index + 1, ds, arr, sum, k, n);

  ds.pop_back();
  sum -= arr[index];

  // not pick, or not take codition, this element is not added to your subsequence

  sum_equals_to_K(index + 1, ds, arr, sum, k, n);
}

int main()
{
  int arr[] = {1, 2, 1};
  int n = 3;
  int k = 2;
  vector<int> ds;
  sum_equals_to_K(0, ds, arr, 0, k, n);
}

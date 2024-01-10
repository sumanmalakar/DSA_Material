#include <iostream>
using namespace std;

char next_alphbet(char arr[], int size, char key)
{
  int s = 0, e = size - 1;
  int mid = 0;
  char result = '#';

  while (s <= e)
  {
    mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
      s = mid + 1;
    }
    else if (arr[mid] < key)
    {
      s = mid + 1;
    }
    else
    {
      result = arr[mid];
      e = mid - 1;
    }
  }
  return result;
}

int main()
{
  char arr[] = { 'c', 'e' ,'f' , 'j'};
  int n = sizeof(arr) / sizeof(arr[0]);

  char target = 'c';
  char next = next_alphbet(arr, n, target);

  cout << "next alphabet " << target << " is = " << next;

  return 0;
}
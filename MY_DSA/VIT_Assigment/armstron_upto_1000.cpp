#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int>result;

  
  for (int i = 1; i < 500; i++)
  {
    int check = i;
    int n = i;
    int arms = 0;
    while (n != 0)
    {
      int temp = n % 10;
      arms += temp * temp * temp;
      n = n / 10;
    }
    if (arms == check)
    {
      result.push_back(i);
    }
   
  }

  for(int x: result){
    cout<<x<<" ";
  }

  return 0;
}


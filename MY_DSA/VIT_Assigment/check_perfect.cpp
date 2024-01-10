#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> perfect;

  int n;
  cout<<"Enter a number \n";
  cin>>n;

  for (int i = 1; i <n; i++)
  {
    if (n%i == 0)
    {
      perfect.push_back(i);
    }
  }
   int sum = 0;
  for (int x : perfect)
  {
   sum += x;
  }
  if(sum == n){
    cout<<"The number is perfect number ";
  }else{
    cout<<"Not a perfect number ";
  }

  return 0;
}
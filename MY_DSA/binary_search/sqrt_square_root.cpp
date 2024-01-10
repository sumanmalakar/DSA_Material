#include<iostream>
using namespace std;
int mySqrt(int x)
{
  long long int res;

  int s = 0, e = x;

  while (s <= e)
  {
    long long int mid = s + (e - s) / 2;

    if (mid * mid == x)
    {
      return mid;
    }
    else if (mid * mid > x)
    {
      e = mid - 1;
    }
    else
    {
      res = mid;
      s = mid + 1;
    }
  }
  return res; 
}

double morePrecision(int n, int precision, int tempsol){
  double factor = 1;
  double ans = tempsol;
  
  for(int i=0; i<precision; i++){
    factor = factor/10;

    for(double j = ans; j*j<n; j = j+factor){
      ans = j;
    }
  }

  return ans;
}


int main()
{
  int n;
  cout<<"Enter the number "<<endl;
  cin>>n;

  int tempSol = mySqrt(n);

  cout<<"Answer is = "<<morePrecision(n, 3, tempSol)<<endl;

  return 0;
}
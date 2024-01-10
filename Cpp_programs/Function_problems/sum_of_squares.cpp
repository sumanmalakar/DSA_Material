#include<iostream> 
using namespace std; 

// Write a function to calculate sum of squrs of first N natural numbers.(all four ways: TNRN, TSRN, TNRS, TSRS)

// TNRN
void squreSum1(){
  int n, sum = 0;
  cout<<"Enter a number \n";
  cin>>n;
  for(int i = 1; i<=n; i++){
    sum = sum + i*i;
  }
  cout<<sum;
}

// TSRN
void squreSum2(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i * i;
  }
  cout << sum;
}

// TNRS
int squreSum3()
{
  int n, sum = 0;
  cout << "Enter a number \n";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i * i;
  }
  return sum;
}

// TSRS
int squreSum4(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i * i;
  }
  return sum;
}

 int main(){
   int n; 
   cout<<"Enter a number \n";
   cin>>n;
   // squreSum1();
  //  squreSum2(n);
  // cout<<squreSum3();
  cout << squreSum4(n);

  return 0;
}
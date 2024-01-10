#include<iostream> 
using namespace std;

// Write a function to calculate sum of first N natural numbers.(all four ways: TNRN, TSRN, TNRS, TSRS)

// TNRN (Take Nothing Returns Nothing)
void sumNatural1(){
  int n;
  cout<<"Enter a number\n";
  cin>>n;
  int sum = 0;
  for(int i = 1; i<=n; i++){
      sum = sum + i;
      cout<<sum<<endl;
  }
  cout<<"The total sum is "<<sum;
}

// TSRN (Take Something Returns Nothing)
void sumNatural2(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
    cout << sum << endl;
  }
  cout << "The total sum is " << sum;
}

// TNRS (Take Nothing Returns Something)
int sumNatural3()
{  
  int n, sum = 0;
  cout<<"Enter a number \n";
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
  }
  return sum;
}

// TSRS (Take Something Returns Something)
int sumNatural4(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
  }
  return sum;
}

 int main(){
   int n;
   cout<<"enter a number \n";
   cin>>n;
// sumNatural1();
// sumNatural2(n);
//  cout<< sumNatural3();
 cout << sumNatural4(n);

 return 0;
}
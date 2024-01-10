#include <iostream>
using namespace std;

int greater_than(int n, int x){
  if(n>x){
    return n;
  }
  return x;
}

int main()
{

  int n , x;
  cout << "Enter the first no \n";
  cin >> n;
  cout << "Enter the second no \n";
  cin>>x;

  int great = greater_than(n, x);
  cout<<"The greater no. is "<<great;

  return 0;
}
#include <iostream>
using namespace std;

void count_reverse(int n){
  if(n==0) return;

  cout<<n<<" ";
  count_reverse(n-1); // tail recursion
}

int main()
{

  int n;
  cout << "Enter a number \n";
  cin >> n;

 count_reverse(n);

  return 0;
}
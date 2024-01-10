#include <iostream>
using namespace std;

// first approch(Not best approch)
void greater_among_three1(int a, int b, int c, int *k)
{
  if (a > b && a > c)
  {
    *k = a;
  }
  if (b > a && b > c)
  {
    *k = b;
  }
  if (c > a && c > b)
  {
    *k = c;
  }
}

//second approch(Little bit better than before)
void greater_among_three2(int a, int b, int c, int *k)
{
  if (a > b && a > c)
  {
    *k = a;
  }
  else
  {
    if (b > c)
      *k = b;
    else
      *k = c;
  }
}

// third approch
void greater_among_three3(int a, int b, int c, int *k){
  if(a>b){
    if(a>c){
      *k = a;
    }
    else 
    *k = c;
  }
  else{
    if(b>c)
    *k = b;
    else 
    *k = c;
  }
}

// using tarnary operator
void greater_among_three4(int a, int b, int c, int *k)
{
  if(a>b){
    *k = a>c?a:c;
  }
  else{
    *k = b>c?b:c;
  }
  
  // *k = a>b ? a>c ? a:c : b>c ? b:c; // --> best way
   
}

  int main()
  {
    int a, b, c, k;
    cout << "Enter a, b , c : \n";
    cin >> a >> b >> c;

    greater_among_three3(a, b, c, &k);

    cout << "The greatest no is " << k;
  }
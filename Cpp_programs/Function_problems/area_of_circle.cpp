#include <iostream>
using namespace std;

// Write a function to calculate area of circle.(Takes Something, Returns Something)

float area(int r)
{
  float pi = 3.14;
  float area = pi * r * r;

  return area;
}

int main()
{
  int r;
  cout << "Enter The area of circle \n";
  cin >> r;
  cout << "The area of circle  "<< " is " << area(r);

  return 0;
}
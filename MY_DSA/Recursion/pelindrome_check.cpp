#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int s, int e)
{
  if (s > e)
  {
    return true;
  }

  if (str[s] != str[e])
    return false;

  s++;
  e--;

  //Recursive Call
  return checkPalindrome(str, s, e);
}

int main()
{

  string name = "abcba";

  cout << name << endl;

  if (checkPalindrome(name, 0, name.length() - 1))
  {
    cout << "String is Palindrome \n";
  }
  else
  {
    cout << "String is not Palindrome \n";
  }

  return 0;
}
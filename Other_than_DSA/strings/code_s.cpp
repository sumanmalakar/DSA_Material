#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(string s)
{

  int n = s.size();
  char ch[20];
 
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      ch[j] = s[i];
      j++;
      
    }
    else if (s[i] >= 'A' && s[i] <= 'Z')
    {
      
      ch[j] = s[i] + 32;
      j++;
    }
  }


  int len = j;
 

  for (int i = 0; i < len / 2; i++)
  {
    if (ch[i] != ch[len - i - 1])
    {
      return false;
    }
  }

  return true;
}

int main()
{
  string s = "N2 i&nJA?a& jnI2n";
  // string n = “c1odeedo1c”;
  
  bool i = checkPalindrome(s);
  cout << "result = " << i;

  return 0;
}
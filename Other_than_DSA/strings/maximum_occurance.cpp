// #include<iostream>
// #include<string.h>

#include<bits/stdc++.h>
using namespace std; 

string remove(string s, string part){
 
  string word = "";

  while (s.length() != 0 && s.find(part) < s.length())
  {
    int n = s.find(part);
    s.erase(n, part.length());
  }
  
  word += s;

  
// return s;
return word;
}


 int main(){

   string s = "daabcbaabcbc";
   string part = "abc";

   // s.erase(6,5);
  //  int n = s.find(part);

  //  s.erase(n, part.length());

   // cout<<s;
   // cout<<f<<" is found at index = "<<n<<endl;
  //  cout << "new string = " << s;

string word =   remove(s,part);

cout<<word;


   return 0;
}
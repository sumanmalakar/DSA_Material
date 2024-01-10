#include<bits/stdc++.h>
using namespace std; 

void Palindrome_ckeck(string &name, int i){ 

  if(i>=name.length()/2){
    cout<<"String is palindrome ";
    return;
  }

  if(name[i]!= name[name.length()-i-1]){
    cout<<"String is not palindrome ";
    return;
  }

  Palindrome_ckeck(name, i+1);
}

 int main(){

string name = "madam1";
Palindrome_ckeck(name,0);
  

return 0;
}
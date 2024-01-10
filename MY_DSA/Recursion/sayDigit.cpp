#include<bits/stdc++.h>
using namespace std; 

vector<string>number = {"zero","one","tow", "three", "four", "five", "six", "seven", "eight","nine"};

void digitSay(int n){
  if(n==0)return;

  int temp = n%10;
  digitSay(n/10);
  cout<<number[temp]<<" ";
}

 int main(){

  int n;
  cout<<"Enter a number \n";
  cin>>n;

  digitSay(n);

return 0;
}
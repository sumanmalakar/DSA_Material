#include<bits/stdc++.h>
using namespace std; 

 int main(){

//    vector<char>c;
//    int n = 10;
//    string s = to_string(n);

//   //  c.push_back('1'); // begin()
//   //  c.push_back(s);
//   //  c.push_back('3');
//   //  c.push_back('4');
//   //  c.push_back('5');
//   //  c.push_back('6');
  

//   //  c.erase(c.begin()+1, c.begin()+3);

// for(int i=0; i<c.size(); i++){
//   cout<<c[i]<<endl;

string t = "11";
string n = "91234567890";

long long int sum = 0;

for(int i=0; i<n.length(); i++){
  int c = n[i] - '0';
  sum = sum*10 + c;
  cout<<sum<<"\n";
}

cout<<"final sum = "<<sum<<endl;

string str = to_string(sum);

cout<<str;


   return 0;
}
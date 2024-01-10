#include<bits/stdc++.h>
using namespace std; 

 int main(){

 vector<string>v;
  string s = "hello this is alpha 5051 and 9475";
  string n;
  for(int i=0; i<s.length(); i++){
    char ch = s[i] - '0';
    if( ch>= 0  && ch<= 9){
       n += s[i];
    }
    if(s[i] == ' '){
      v.push_back(n);
      n = "";
    }
  }
  if(n.length()>0){
    v.push_back(n);
  }

// for(auto x:v){
//   cout<<x<<" ";
// }

for(int i=0; i<v.size(); i++){
  string s = v[i];
  int j;
  for(j = 0; j<s.length();j++){
    char ch = s[j] - '0';
    if(ch== 9){
     j = 0;
     break;
    }
  } if(j==s.length()){
  cout<<v[i]<<" ";
  }
}

return 0;
}
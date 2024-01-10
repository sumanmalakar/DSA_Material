#include<bits/stdc++.h>
using namespace std;

bool checkStrobo(int n, int &rev){
// n == 8

if(n == 0){
rev = 0;
return true;
}else if(n==1){
rev = 1;
return true;
} else if(n==6){
rev = 9;
return true;
}else if(n==9){
rev = 6;
return true;
}else if(n==8){
rev = 8;
return true;
}
return false;
}
int main(){

  int n;
  cin>>n;
  vector<int>v;
if(n>9){
  while(n!=0){
    int temp = n%10;
    n = n/10;
    v.push_back(temp);
  }
}

for(int i=0; i<v.size(); i++){
  int n;
if(checkStrobo(v[i],n))
}
}
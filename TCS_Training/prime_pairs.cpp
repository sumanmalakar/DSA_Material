#include<bits/stdc++.h>
using namespace std; 

 int main(){

  int n = 10, m = 20;
  vector<int>v;
  for(n; n<=m; n++){
    int j = 2;
    for(j; j<n; j++){
      if(n%j == 0){
        break;
    }
      } if(j == n){
        v.push_back(n);
      }}

  for(int i=0; i<v.size(); i++){
    for(int  j = i+1; j<v.size(); j++){
      if(v[i]+6 == v[j]){
        cout<<"("<<v[i]<<" "<<v[j]<<")"<<endl;
      }
    }
  }


return 0;
}
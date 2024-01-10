#include<bits/stdc++.h>
using namespace std; 

 int main(){
int n = 9;
int arr[] = {34,8,10,3,2,80,30,33,1};

vector<int>v;

for(int k =0; k<n; k++){
int i =k, j =n-1;
while(i<j){
  if(arr[i]<arr[j]){
       v.push_back(j-i); }
  j--;
}
}
int max = v[0];
for(int i=1; i<v.size(); i++){
  if(max<v[i]){
    max = v[i];
  }
}
  cout<<max;

return 0;
}
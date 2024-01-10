#include<bits/stdc++.h>
using namespace std; 

 int main(){
  int n = 5;
  char ch [] = {'x','y','x'};
 vector<bool>b(n, true);
int i = 0;

int j = 0;
while(n!=1){
  for( i=0; i<b.size(); i++){
    if(b[i] == true){
      if(ch[j] == 'y'){
        b[i] = false;
        n--;
        j++;
      }else{
        j++; 
      }
    }
    // i++;
    if(i>=b.size()){
      i=0;
    }
    if(j>= 3){
      j=0;
    }
  }
}
 
for(int i=0; i<b.size(); i++){
  if(b[i]){
    cout<<(i+1);
    break;
  }
}
return 0;
}

// x y x
// 1 2 3
// 1 3
// 1


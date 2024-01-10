#include<bits/stdc++.h>
using namespace std;

int prime_factor(int n){
int count2 = 0;
int coutn3 = 0;
while(n!=1){
    if(n%2 == 0){
        n = n/2;
      count2++;
    }else if(n%3 == 0){
      n = n/3;
      coutn3++;
    }else{
        break;
    }
}

cout<<"Number of two = "<<count2<<" Number of three is = "<<coutn3;
return 0;
}

int main(){
    int n = 120;
    // cout<<"The prime factor = "<<prime_factor(n);
    prime_factor(n);
}
#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int result = 0;
    if(n>=0 && n<=9){
        return n;
    }else{
        while(n!=0){
            int temp = n%10;
            result += temp;
            n = n/10;
        }
    }
    return result;
}

int main(){
    int n = 521;

   cout<<"The reverse Number is = "<<reverse(n);

}
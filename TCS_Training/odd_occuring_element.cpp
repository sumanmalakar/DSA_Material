#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,2,4,5,5,6,6};
    int n = 7;

    int result;

    for(int i=0; i<n; i++){
        if(arr[i] != arr[i+1]){
            result = arr[i+1];
        }
    }

    cout<<result;


}
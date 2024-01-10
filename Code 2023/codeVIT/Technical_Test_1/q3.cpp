// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row, col;
    cin>>row;
    cin>>col;
    int arr[row][col];
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(row != col){
        cout<<"The entered array is not square matrix.";
    }else{
        cout<<"The entered array is a square matrix.";
    }
}
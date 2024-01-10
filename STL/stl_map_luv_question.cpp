/* 
Given N strings, print unique string in lexiographical order with their frequency 
N <= 10^5
|S| <= 100
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int>m;
    int n;
    cout<<"Enter a number \n";
    cin>>n;

    cout<<"Enter a string \n";
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        // m[s] = m[s] + 1;
        m[s]++;
    }

    for(auto pr: m){
        cout<<pr.first<<" "<< pr.second<<endl;
    }





}
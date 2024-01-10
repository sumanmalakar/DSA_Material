/*
Given N strings and Q queries. In each query you are given a string print frequency of that string

N <= 10^6
|S| <= 100
Q <= 10^6

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>m;
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    cout<<"Enter the string \n";
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        // m[s] = m[s]+1;
        m[s]++;
    }
    int q;
    cout<<"Enter the query \n";
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }

}
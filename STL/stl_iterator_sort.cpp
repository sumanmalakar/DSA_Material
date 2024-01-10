#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {2,3,5,6,7};

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
cout<<endl;

for(auto it = v.begin(); it != v.end(); it++){
    cout<<(*it)<<" ";
}
cout<<endl;

// pass by reference
for(int &value:v){
    value++;
}

// for(int value: v){
//     cout<<value<<" ";
// }

vector<pair<int, int>>v_p = {{1,2},{2,3}};
for(auto &value:v_p){
    cout<<value.first<<" "<<value.second<<" ";
}
cout<<endl;

auto a = "suman";

cout<<a<<endl;



}
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr = {1,2,4,1,5,2,1,6};

     unordered_map<int,int>count;

    int maxFrequency = 0;
    int maxAns = 0;

    for(int i=0; i<arr.size(); i++){
        count[arr[i]]++;
        maxFrequency = max(maxFrequency, count[arr[i]]);
    }

for(auto it:count){
       cout<<it.first<<" "<<it.second<<endl;

}
    

    for(int i=0; i<arr.size(); i++){
        if(maxFrequency == count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }

    cout<<maxAns<<endl;
}
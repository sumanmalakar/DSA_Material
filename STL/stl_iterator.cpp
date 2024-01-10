#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {2,3,5,6,7};

   for(auto x: v){
    cout<<x<<' ';
   }

   cout<<endl;

//    vector<int>:: iterator it = v.begin();
//    cout<<(*(it+3))<<endl;

// for(it = v.begin(); it != v.end(); it++){
//     cout<<(*it)<<endl;
// }

vector<pair<int,int>>v_p = {{1,2} , {2,3} , {3,4},{4,5},{5,6},{6,7},{7,8},{8,9}};
vector<pair<int,int>> :: iterator it;
for(it = v_p.begin(); it != v_p.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
}  cout<<"This is another iterator \n";
for(it = v_p.begin(); it != v_p.end(); it++){
    cout<<it->first<<" "<<it->second<<endl;
}

// (*it).first <=> (it->first)


}
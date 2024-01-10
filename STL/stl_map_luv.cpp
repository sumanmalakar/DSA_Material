#include<bits/stdc++.h>
using namespace std;

void print(map<int,string>&m){
    cout<<"size of map is = "<< m.size()<<endl;
    for(auto &pr : m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main(){
    // map<string,string> m;
    map<int,string> m;
    m[1] = "abc"; // O (log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[2] = "acde";
    m[6] = "suman";
    m[5] = "cde";
m.insert({4,"afg"});

// m["abcd"] = "abcd"; // log(n)


// find any element in map
auto it = m.find(1); // O(log(n))
m.erase(3); // erasing any element

if(it != m.end()){
    m.erase(it);
}
// m.clear();

print(m);

    if(it == m.end()){
        cout<<"No value find";
    }else{
        cout<<"Element is found = "<<(*it).first<<" "<<(*it).second<<endl;
    }






    
    return 0;
}
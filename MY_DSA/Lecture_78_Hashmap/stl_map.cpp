#include<bits/stdc++.h>
using namespace std;

int main(){

// creation
//   unordered_map<string, int> m;
map<string, int> m;
  
  //insertion

  //1
  pair<string,int> p = make_pair("suman",3);
  m.insert(p);

  //2
  pair<string,int> pair2("malakar", 2);
  m.insert(pair2);

 //3
  m["mera"] = 1;
  m["era"] = 10;
  m["suman"] = 5;



  //what will happen
  m["mera"] = 2; //it will override the value..


//Search
cout<<m["mera"]<<endl;
cout<<m.at("suman")<<endl;

// cout<<m["unknownKey"]<<endl;
// cout<<m.at("unknownKey")<<endl;

//size
cout<<m.size()<<endl;

//to check presence
cout<<m.count("suman")<<endl;

//erase
m.erase("suman");
cout<<m.size()<<endl;

// traverse
for(auto it:m){
    cout<<it.first<<" "<<it.second<<endl;
}


// using iterator
// unordered_map<string,int>:: iterator it = m.begin();
map<string,int>:: iterator it = m.begin();

cout<<"Using iterator.."<<endl;
while(it !=m.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}

    return 0;

}

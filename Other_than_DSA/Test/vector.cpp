// #include<iostream>
#include<bits/stdc++.h>
using namespace std; 

 int main(){
// // 
//    vector<int> v;
//    cout<<"Size = "<<v.capacity()<<endl;

//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);

//    cout << "Size = " << v.capacity() << endl;

//    v.push_back(4);

//    cout << "Size = " << v.capacity() << endl;

//    v.push_back(5);

//    cout << "Size = " << v.capacity() << endl;

//    cout<<"element at 2 = "<<v.at(2)<<endl;

//    // first element
//    cout<<"first element = "<<v.front()<<endl;
//    //last element
//    cout<<"last element = "<<v.back()<<endl;

// // pop se element niklta hai

// // before pop
// cout<<"before pop \n";
// for(int i:v){
//   cout<<i<<" ";
// }
// cout<<endl;

// v.pop_back();

// cout<<"after pop \n";
// for(int i:v){
//   cout<<i<<" ";
// }

// cout<<"\n before clear size "<<v.size()<<endl;
// v.clear();
// cout<<"after clear size "<<v.size()<<endl;


// vector<int> a(5,2);
// for(int i:a){
//   cout<<i<<" ";
// }
// cout<<endl;

// vector<int> latest(a);
// for (int i : latest)
// {
//   cout << i << " ";
// }
// cout << endl;

vector<int> s = {3,1,67,8,45,77};
// sort(s.begin(), s.end());

int n = s.size();
cout<<"size = "<<n<<endl;
cout<<"capacity = "<<s.capacity()<<endl;

// s.pop_back();
// s.erase(3);

s.erase(s.begin() + 1);

for(int i:s){
  cout<<i<<" ";
}
// cout<<endl;
// if(s[0]!=s[1]){
//   cout<<s[0];
// }


return 0;
}
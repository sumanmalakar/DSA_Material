#include<bits/stdc++.h>
using namespace std; 

void update(string & str){
   str = str + "s";
   string n = str;
   n[1] -= 32; 
  cout<<"in function -> "<<n<<endl;
}

 int main(){

  //  vector<vector<int>> v;

  //  vector<int> temp;

  //  for(int i=0; i<5; i++){
  //    temp.push_back(i);
  //  }

  //  v.push_back(temp);

  //  temp.clear();

  //  for (int i = 5; i < 7; i++)
  //  {
  //    temp.push_back(i);
  //  }
  //  v.push_back(temp);

  //  temp.clear();
  //  for (int i = 2; i < 5; i++)
  //  {
  //    temp.push_back(i);
  //  }

  //  v.push_back(temp);

  //  temp.clear();
  //  for (int i = 2; i < 5; i++)
  //  {
  //    temp.push_back(i);
  //  }

  //  v.push_back(temp);

  //  cout<<"size of v = "<<v.size()<<endl;

  //  cout<<"size of v iner = "<<v[1].size()<<endl;

  //  cout << "size of v iner = " << v[2].size() << endl;

  //  if(v[0] == v[2]){
  //    cout<<"yes"<<endl;
  //  }
  //  cout<<endl;

  //  for(int i=0; i<v.size(); i++){
  //    for(int j=0; j<v[i].size(); j++){
  //      cout<<v[i][j]<<" ";
  //    }
  //    cout << " i = " << i;

  //    cout<<endl;
  //  }
      
  //  sort(v.begin(), v.end());
  //  cout << endl;

  //  for (int i = 0; i < v.size(); i++)
  //  {
  //    for (int j = 0; j < v[i].size(); j++)
  //    {
  //      cout << v[i][j] << " ";
  //    }
  //    cout << " i = " << i;

  //    cout << endl;
  //  }

  //  if (v[1] == v[2])
  //  {
  //    cout << "yes" << endl;
  //    v.erase(v.begin() + 2);
  //  }
  //  else
  //  {
  //    cout << "no " << endl;
  //  }

  //  cout<<"after sort \n";

  //  for (int i = 0; i < v.size(); i++)
  //  {
  //    for (int j = 0; j < v[i].size(); j++)
  //    {
  //      cout << v[i][j] << " ";
  //    }
  //    cout<<" i = "<<i;
  //    cout << endl;
  //  }

  string str = "suman";

  cout<<str<<endl;

  update(str);

  cout << str << endl;

  return 0;
}
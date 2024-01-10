#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int n, t;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    cin >> t;
    v.push_back(t);
  }
  int r;
  cin>>r;
  v.erase(v.begin()+r-1);
  int f,s;
  cin>>f>>s;
  v.erase(v.begin()+f-1,v.begin()+s-1);

 cout<<v.size();
 cout<<endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }

  return 0;
}
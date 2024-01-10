#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 16;

    // 16,4
    // 3,1

    vector<bool> v(n, false);

    for (int i = 0; i < v.size(); i++)
    {
        int j = i;
        while (j < v.size())
        {
            v[j] == false ? (v[j] = true) : (v[j] = false);

            j = j + (i + 1);
        }

        cout<<i+1<<" , ";

      for (auto x : v)
    {
        cout << x << " ";
    }
    cout<<endl;
    }

int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]) count++;
    }

    cout<<"The count = "<<count;
   


}
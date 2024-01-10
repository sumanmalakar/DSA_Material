#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(8);
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(10);

    for (auto i : s)
    {
        cout << i << endl;
    }

//     s.erase(s.begin());

//         for (auto i : s)
//     {
//         cout << i << "  ";
//     }
//     cout<<"\n -5 is present or not -> "<<s.count(-5)<<endl;

// set<int>::iterator itr = s.find(5);

// cout<<"Value present at itr -> "<<*itr<<endl;


    return 0;
}
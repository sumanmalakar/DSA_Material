#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "suman";
    m[14] = "kumar";
    m[2] = "malakar";

    m.insert({5, "ram"});

    // finding any element
    // cout << "finding 14 -> " << m.count(14) << endl;

    // cout << "Before erase " << endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // m.erase(14);
    // cout << "After erase " << endl;
    // for (auto i : m)
    // {
    //     cout << i.first << " " << i.second << endl;
    // }

    // cout<<endl;

    // auto it = m.find(5);

    cout<<"suman"<<endl;

    // for(auto i=it; i!=m.end(); i++){
    //     cout<<(*i).first<<endl;
    // }

    // return 0;

    // string s = "SUMAN";
    // reverse(s.begin(), s.end());

    // cout<<s;
}
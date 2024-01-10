#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m)
{
    cout << "size of map is = " << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    // 1. inbuilt implementation
    // 2. Time complexity
    // 3. valid keys datatype
    unordered_map<int, string> m;
        m[1] = "abc"; // O (log(n))
        m[5] = "cdc";
        m[3] = "acd";
        m[2] = "acde";
        m[6] = "suman";
        m[5] = "cde";
    // m.insert({4,"afg"});


    // find any element in map
    auto it = m.find(7); // O(1)

 
    if (it != m.end())
    {
        m.erase(it);
    }
    m.clear();


    // if (it == m.end())
    // {cout << "No value find";
    // }
    // else
    // {  cout << "Element is found = " << (*it).first << " " << (*it).second << endl;
    // }

    print(m);

    return 0;
}
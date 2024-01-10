#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 100;
    int return_amount = 55;
    int chocolate_3 = 0;
    int chocolate_7 = 0;
    int result_count = num - return_amount;

    vector<int> v;
    int i = 100;
    int check = 0;

    while (i >= return_amount)
    {
        int number = num - i;
        if (number % 3 == 0)
        {
            v.push_back(i);
            chocolate_3++;
            check += (3 * (number / 3));
            if (check >= result_count)
            {
                break;
            }
            cout << " check = " << check << endl;
        }
        else if (number % 7 == 0)
        {
            v.push_back(i);
            chocolate_7++;
            // check = 3 * chocolate_3 + 7 * chocolate_7;
            check += (7 * (number / 7));
            if (check >= result_count)
            {
                break;
            }
            cout << " check = " << check << endl;
        }
        i--;
    }

    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    cout << chocolate_3 << " " << chocolate_7;
}
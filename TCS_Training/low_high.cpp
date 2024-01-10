#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x = 4;
    int y = 5;
    int k = 3;
    int sum = 0;
    int count = 0;
    int noofleter = 0;
    for (int i = x; i <= y; i++)
    {
        noofleter++;
    }

    int noofP = noofleter;
    for (int i = x; i <= y; i++)
    {
        sum = 0;
        for (int j = i; j <= y; j++)
        {
            sum = i + j;
            if (sum % 2 == 0)
            {
                cout << sum;
                count++;
            }
        }
    }
    if (count % 2 == 0)
    {
        cout << " number of digits " << count;
    }
    else
    {
        cout << "404 error";
    }
}
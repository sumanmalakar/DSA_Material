#include <bits/stdc++.h>
using namespace std;

int prime_factor(int n)
{

    vector<int> prime;

    for (int i = 2; i < n; i++)
    {
        int j = 2;
        for (j; j < i; j++)
        {
            if (i % j == 0)
            {
                j = 0;
                break;
            }
        }
        if (j == i)
        {
            prime.push_back(i);
        }
    }

    int count = 0;

    for (int i = 0; i < prime.size(); i++)
    {
        if (n != 1)
        {
            bool flag = true;
            while (n != 1)
            {

                if (n % (prime[i]) == 0)
                {
                    n = n / prime[i];
                    if (flag)
                    {
                        count += prime[i];
                        flag = false;
                    }
                }
                else
                {

                    break;
                }
            }
        }
        else
        {
            break;
        }
    }

    cout << "The count is = " << count << " ";
}

int main()
{
    int n = 60;
    // cout<<"The prime factor = "<<prime_factor(n);
    prime_factor(n);
}
#include <iostream>
using namespace std;

int main()
{
    long long n;
    int one = 1, five = 5, ten = 10, twnt = 20, hund = 100;

    int cnt = 0;

    cin >> n;

    while (n != 0)
    {
        if (n >= hund)
        {
            cnt++;
            n = n - hund;
        }
        else if (n >= twnt)
        {
            cnt++;
            n = n - twnt;
        }
        else if(n >= ten)
        {
            cnt++;
            n = n - ten;
        }
        else if(n >= five)
        {
            cnt++;
            n = n - five;
        }
        else if(n >= one)
        {
            cnt++;
            n = n - one;
        }
    }

    cout << cnt;
}
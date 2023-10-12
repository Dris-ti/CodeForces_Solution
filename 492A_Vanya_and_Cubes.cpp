#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, cnt = 0, ttl = 0;

    cin >> n;

    if(n == 1)
    {
        cout << 1;
        return 0;
    }

    int i = 0;
    while(ttl < n)
    {
        i++;
        sum += i;
        ttl += sum;
    }
    if(ttl == n)
    {
        cout << i;
    }
    else
    {
        cout << i-1;
    }
}
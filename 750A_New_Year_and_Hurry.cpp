#include <iostream>
using namespace std;

int main()
{
    int n, t, cnTime = 0;
    int toTime = 1440;
    
    cin >> n;
    cin >> t;

    for(int i = 1; i <= n; i++)
    {
        cnTime += i * 5;
        if((cnTime + t + 1200) > toTime)
        {
            cout << i -1;
            return 0;
        }
    }

    cout << n;




}
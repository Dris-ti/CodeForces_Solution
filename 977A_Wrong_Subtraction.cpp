#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;

    int lDigit;

    for(int i = 0; i < k; i++)
    {
        lDigit = n % 10;
        if( lDigit != 0)
        {
            n = n - 1;
        }
        else
        {
            n = n / 10;
        }
    }
    cout << n;
     
}
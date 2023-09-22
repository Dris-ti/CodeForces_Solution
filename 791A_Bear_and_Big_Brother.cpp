#include <iostream>

using namespace std;


int main()
{
    int a, b, yrs = 0;

    cin >> a;
    cin >> b;

    for (int i = 0; i < 10; i++)
    {
        if( a <= b)
        {
            a = a * 3;
            b = b * 2;
            yrs++;
        }
    }
    cout << yrs;
}
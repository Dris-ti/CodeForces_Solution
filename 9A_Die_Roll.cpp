#include <iostream>
using namespace std;

int main()
{
    int y, w, mx, a, b = 6, var = 2;
    float ans;

    cin >> y >> w;

    mx = (max(y, w));

    a = (6 - mx) + 1;

    if (b % a == 0)
    {
        b /= a;
        a /= a;
    }
    else
    {
        while (b % var == 0 && a % var == 0)
        {
            a = a / var;
            b = b / var;
            var++;
        }
    }

    cout << a << "/" << b;
}